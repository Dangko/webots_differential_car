#include <signal.h>
#include <locale.h>
#include "ros/ros.h"

//ros msgs
#include <std_msgs/String.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/NavSatFix.h>
#include "sensor_msgs/PointCloud.h"
#include "sensor_msgs/Joy.h"
#include <tf/transform_broadcaster.h>
#include "tf/transform_datatypes.h"
#include "tf/transform_listener.h"
#include "sensor_msgs/LaserScan.h"
#include "tf2_msgs/TFMessage.h"
#include "tf2_ros/static_transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"
#include "geometry_msgs/TransformStamped.h"
#include "nav_msgs/Odometry.h"

//webots_ros
#include <webots_ros/set_float.h>
#include <webots_ros/set_int.h>
#include <webots_ros/set_bool.h>
#include <webots_ros/get_int.h>
#include <webots_ros/field_get_int32.h>
#include <webots_ros/field_get_rotation.h>

#define TIME_STEP 32
#define NMOTORS 4
#define MAX_SPEED 10
#define L 0.51
#define S 0.5

ros::NodeHandle *n;

static int controllerCount;
static std::vector<std::string> controllerList;

ros::ServiceClient timeStepClient;
webots_ros::set_int timeStepSrv;
sensor_msgs::LaserScan lidar3d_scan;

double Left_vel = 0;
double Right_vel = 0;

static const char *motorNames[NMOTORS] = {"wheel1", "wheel2", "wheel3", "wheel4"};

//激光雷达消息订阅回调函数
void lidar3d_callback(const sensor_msgs::LaserScan::ConstPtr& Pointcloud)
{
    lidar3d_scan = *Pointcloud;
}

//joy手柄回调函数
void joy_callback(const sensor_msgs::Joy::ConstPtr& joy)
{
    double vel = 0;
    double omega = 0;
    double A = L/(L*L + S*S);
    vel = joy->axes[1]*10.0;
    omega = joy->axes[2]*10.0*(-1);
    Left_vel = vel + 0.5*omega/A;
    Right_vel = vel - 0.5*omega/A;
}

//sup_int_callback
bool sup_int_callback(webots_ros::field_get_rotation::Request &req,webots_ros::field_get_rotation::Response &res)
{
    ROS_INFO("response = %d", res.value.x);
    ROS_INFO("sup_int succeed!");

    return true;
}

// 更新速度
void updateSpeed() {
    double speeds[NMOTORS];

    speeds[0] = Left_vel;
    speeds[1] = Right_vel;
    speeds[2] = Left_vel;
    speeds[3] = Right_vel;

    for (int i = 0; i < NMOTORS; ++i)
    {
        ros::ServiceClient set_velocity_client;
        webots_ros::set_float set_velocity_srv;
        set_velocity_client = n->serviceClient<webots_ros::set_float>(std::string("/my_car/") + std::string(motorNames[i]) + std::string("/set_velocity"));
        set_velocity_srv.request.value = speeds[i];
        set_velocity_client.call(set_velocity_srv);
    }
}

// 获取可用控制器的名称
void controllerNameCallback(const std_msgs::String::ConstPtr &name) {
    controllerCount++;
    controllerList.push_back(name->data);
    ROS_INFO("Controller #%d: %s.", controllerCount, controllerList.back().c_str());
}

//退出函数
void quit(int sig)
{
    ROS_INFO("终止节点运行.");
    timeStepSrv.request.value = 0;
    timeStepClient.call(timeStepSrv);
    ros::shutdown();
    exit(0);
}

//use joy to control my_car

int main(int argc, char **argv) {
    setlocale(LC_CTYPE,"zh_CN.utf8");

    ros::init(argc, argv, "my_car", ros::init_options::AnonymousName);
    n = new ros::NodeHandle;
    ros::Subscriber sub_joy = n->subscribe<sensor_msgs::Joy>("/joy",10,joy_callback);

    signal(SIGINT, quit);

    std::string controllerName;

    //tf关系建立
    static tf::TransformBroadcaster laser_broadcaster;
    static tf::TransformBroadcaster odom_broadcaster;
    static tf::TransformBroadcaster base_broadcaster;
    tf::Transform laser_transform;
    tf::Transform odom_transform;
    tf::Transform base_transform;

    //tf_static话题发布

    static tf2_ros::StaticTransformBroadcaster static_broadcast;
    geometry_msgs::TransformStamped static_transformStamped;
    static_transformStamped.header.stamp = ros::Time::now();
    static_transformStamped.header.frame_id = "base_link";
    static_transformStamped.child_frame_id = "my_car/lidar3d";
    static_transformStamped.transform.translation.x = 0.2;
    static_transformStamped.transform.translation.y = 0;
    static_transformStamped.transform.translation.z = 0;
    tf2::Quaternion quat;
    quat.setRPY(0, 0,0);
    static_transformStamped.transform.rotation.x = quat.x();
    static_transformStamped.transform.rotation.y = quat.y();
    static_transformStamped.transform.rotation.z = quat.z();
    static_transformStamped.transform.rotation.w = quat.w();


    //odom
    ros::Publisher odom_pub = n->advertise<nav_msgs::Odometry>("odom",5);
    nav_msgs::Odometry odom;
    odom.pose.pose.position.x = 2;
    odom.pose.pose.position.y = 2;
    odom.pose.pose.position.z = 2;
    odom.pose.pose.orientation.x = 0;
    odom.pose.pose.orientation.y = 0;
    odom.pose.pose.orientation.z = 0;
    odom.pose.pose.orientation.w = 0;

    /**********************************************   当作模板即可   ****************************************************/
    // 订阅主题model_name以获得可用控制器列表
    ros::Subscriber nameSub = n->subscribe("model_name", 100, controllerNameCallback);
    while (controllerCount == 0 || controllerCount < nameSub.getNumPublishers()) {
        ros::spinOnce();
        ros::spinOnce();
        ros::spinOnce();
    }
    ros::spinOnce();

    // 设置基本仿真步长
    timeStepClient = n->serviceClient<webots_ros::set_int>("/my_car/robot/time_step");
    timeStepSrv.request.value = TIME_STEP;

    // 多控制器时可选
    if (controllerCount == 1){
        controllerName = controllerList[0];
    }
    else {
        int wantedController = 0;
        std::cout << "选择要使用的控制器的编号 :\n";
        std::cin >> wantedController;
        if (1 <= wantedController && wantedController <= controllerCount)
            controllerName = controllerList[wantedController - 1];
        else {
            ROS_ERROR("无效的控制器编号.");
            return 1;
        }
    }
    ROS_INFO("Using controller: '%s'", controllerName.c_str());
    nameSub.shutdown();


    /**********************************************  电机模式设置   ****************************************************/
    for (int i = 0; i < NMOTORS; ++i) {
        ros::ServiceClient set_position_client;
        webots_ros::set_float set_position_srv;
        set_position_client = n->serviceClient<webots_ros::set_float>(std::string("/my_car/") + std::string(motorNames[i]) + std::string("/set_position"));
        //设置速度模式
        set_position_srv.request.value = INFINITY;
        if (set_position_client.call(set_position_srv) && set_position_srv.response.success)
            ROS_INFO("motor %s 工作模式为速度模式.", motorNames[i]);
        else
            ROS_ERROR("无法调用motor %s的set_position服务 .", motorNames[i]);

        // 创建速度client
        ros::ServiceClient set_velocity_client;
        set_velocity_client = n->serviceClient<webots_ros::set_float>(std::string("/my_car/") + std::string(motorNames[i]) + std::string("/set_velocity"));
        // 创建服务
        webots_ros::set_float set_velocity_srv;
        set_velocity_srv.request.value = 0.0;

        if (set_velocity_client.call(set_velocity_srv) && set_velocity_srv.response.success == 1)
            ROS_INFO("Velocity set to 0.0 for motor %s.", motorNames[i]);
        else
            ROS_ERROR("Failed to call service set_velocity on motor %s.", motorNames[i]);
    }

    /**********************************************   传感器使能   ****************************************************/
    // 使能 camera
    ros::ServiceClient set_camera_client;
    webots_ros::set_int camera_srv;
    ros::Subscriber sub_camera;
    set_camera_client = n->serviceClient<webots_ros::set_int>("/my_car/kinect_color/enable");
    camera_srv.request.value = 64;
    set_camera_client.call(camera_srv);

    /**********************************************    激光雷达   ****************************************************/
    ros::ServiceClient set_lidar3d_client;
    ros::ServiceClient set_lidar3d1_client;
    webots_ros::set_int lidar3d_srv;
    webots_ros::set_bool lidar3d1_srv;
    ros::Subscriber sub_lida3d_scan = n->subscribe<sensor_msgs::LaserScan>("my_car/lidar3d/laser_scan/layer10",10,lidar3d_callback);
    ros::Publisher publisher = n->advertise<sensor_msgs::LaserScan>("scan",20);

    //使能激光雷达
    set_lidar3d_client = n->serviceClient<webots_ros::set_int>(std::string("/my_car/")+std::string("lidar3d/")+std::string("enable"));
    set_lidar3d1_client = n->serviceClient<webots_ros::set_bool>(std::string("/my_car/")+std::string("lidar3d/")+std::string("enable_point_cloud"));
    lidar3d_srv.request.value=TIME_STEP;
    lidar3d1_srv.request.value=true;


    if(set_lidar3d_client.call(lidar3d_srv) && lidar3d_srv.response.success)
    {
        ROS_INFO("lidar3d enable");
        //sub_lida3d_scan = n->subscribe<sensor_msgs::PointCloud>(std::string("/my_car/")+std::string("lidar3d/")+std::string("point_cloud"),10,lidar3d_callback);
        ROS_INFO("Topic for lidar3d initialized.");
        ROS_INFO("Topic for lidar3d scan connected.");
        if (set_lidar3d1_client.call(lidar3d1_srv) && lidar3d1_srv.response.success)
            ROS_INFO("lidar3d pointclouds enabled .");
    }
    else
    {
        if (!lidar3d_srv.response.success)
            ROS_ERROR("Sampling period is not valid.");
        ROS_ERROR("Failed to enable lidar3d.");
        return 1;
    }

    /******************************************** supervisor ****************************************************** */
    ros::ServiceServer get_super_int32 = n->advertiseService("/my_car/supervisor/field/get_rotation",sup_int_callback);
    webots_ros::get_int sup_serve;




    /******************************************** 主循环 ****************************************************** */
    while (ros::ok()) {
        updateSpeed(); // 更新小车速度
        publisher.publish(lidar3d_scan);

        /*
        base_transform.setOrigin(tf::Vector3(2,2,2));
        tf::Quaternion q_base;
        q_base.setRPY(0,0,0);
        base_transform.setRotation(q_base);
        base_broadcaster.sendTransform(tf::StampedTransform(base_transform,ros::Time::now(),"odom","base_link"));

        static_broadcast.sendTransform(static_transformStamped);
        */
        static tf::TransformBroadcaster br;
        tf::Transform transform;

        // Publish odometry transform
        transform.setOrigin(tf::Vector3(1, 1, 0));
        tf::Quaternion q(0,0, 0, 1);
        transform.setRotation(q);
        br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "odom", "base_link"));

        // Publish Lidar transform (inverted to match ENU)
        transform.setIdentity();
        transform.setRotation(tf::Quaternion(tf::Vector3(1, 0, 0), M_PI));
        br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "base_link", "my_car/lidar3d"));

        odom_pub.publish(odom);

        if (!timeStepClient.call(timeStepSrv) || !timeStepSrv.response.success) {
            ROS_ERROR("Failed to call service time_step for next step.");
            break;
        }
        ros::spinOnce();
    }
    timeStepSrv.request.value = 0;
    timeStepClient.call(timeStepSrv);

    ros::shutdown();
    return 0;
}


