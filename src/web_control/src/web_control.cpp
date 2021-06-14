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
#include "sensor_msgs/Imu.h"
#include <tf/transform_broadcaster.h>
#include "tf/transform_datatypes.h"
#include "tf/transform_listener.h"
#include "sensor_msgs/LaserScan.h"
#include "tf2_msgs/TFMessage.h"
#include "tf2_ros/static_transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"
#include "geometry_msgs/TransformStamped.h"
#include "nav_msgs/Odometry.h"
#include "rosgraph_msgs/Clock.h"

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
sensor_msgs::LaserScan lidar_scan;

double Left_vel = 0;
double Right_vel = 0;
double GPS_value[3];
double IMU_value[4];

static const char *motorNames[NMOTORS] = {"wheel1", "wheel2", "wheel3", "wheel4"};

//TF树
void broadcastTransform()
{
    static tf::TransformBroadcaster br;
    tf::Transform transform;
    transform.setOrigin(tf::Vector3(-GPS_value[2],GPS_value[0],GPS_value[1]));// 设置原点
    tf::Quaternion q(IMU_value[0],IMU_value[1],IMU_value[2],IMU_value[3]);// 四元数 ->欧拉角
    q = q.inverse();// 反转四元数
    transform.setRotation(q); //设置旋转数据
    br.sendTransform(tf::StampedTransform(transform,ros::Time::now(),"odom","base_link"));// 发送tf坐标关系
    transform.setIdentity();
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "base_link", "/my_car/Sick_LMS_291"));
}


//GPS回调函数
void GPS_callback(const sensor_msgs::NavSatFix::ConstPtr& GPS_data)
{
    GPS_value[0] = GPS_data->altitude;
    GPS_value[1] = GPS_data->latitude;
    GPS_value[2] = GPS_data->longitude;
    broadcastTransform();
}

//IMU回调函数
void IMU_callback(const sensor_msgs::Imu::ConstPtr& IMU_data)
{
    IMU_value[0] = IMU_data->orientation.x;
    IMU_value[1] = IMU_data->orientation.y;
    IMU_value[2] = IMU_data->orientation.z;
    IMU_value[3] = IMU_data->orientation.w;
    broadcastTransform();
}



//激光雷达消息订阅回调函数
void lidar_callback(const sensor_msgs::LaserScan::ConstPtr& Pointcloud)
{
    lidar_scan = *Pointcloud;
}

//joy手柄回调函数
void joy_callback(const sensor_msgs::Joy::ConstPtr& joy)
{
    double vel = 0;
    double omega = 0;
    double A = L/(L*L + S*S);
    vel = joy->axes[1]*30.0;
    omega = joy->axes[2]*50.0*(-1);
    Left_vel = vel + 0.5*omega/A;
    Right_vel = vel - 0.5*omega/A;
    ROS_INFO("update success");
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

    speeds[0] = 1;
    speeds[1] = 1;
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

    /**********************************************   GPS使能   ****************************************************/
    // 使能 GPS
    ros::ServiceClient set_GPS_client;
    webots_ros::set_int GPS_srv;
    ros::Subscriber sub_GPS;
    set_GPS_client = n->serviceClient<webots_ros::set_int>("/my_car/gps/enable");
    GPS_srv.request.value = TIME_STEP;
    if(set_GPS_client.call(GPS_srv)&&GPS_srv.response.success)
    {
        ROS_INFO("GPS enable success!");
    }
    //订阅GPS信息
    sub_GPS = n->subscribe<sensor_msgs::NavSatFix>("/my_car/gps/values",10,GPS_callback);

    /**********************************************   IMU使能   ****************************************************/
    ros::ServiceClient set_IMU_client;
    webots_ros::set_int IMU_srv;
    ros::Subscriber sub_IMU;
    set_IMU_client = n->serviceClient<webots_ros::set_int>("/my_car/imu/enable");
    IMU_srv.request.value = TIME_STEP;
    if(set_IMU_client.call(IMU_srv)&&IMU_srv.response.success)
    {
        ROS_INFO("IMU enable success!");
    }
    //订阅GPS信息
    sub_IMU = n->subscribe<sensor_msgs::Imu>("/my_car/imu/roll_pitch_yaw",10,IMU_callback);

    /**********************************************    激光雷达   ****************************************************/
    //使能激光雷达
    ros::ServiceClient set_lidar_client;
    ros::ServiceClient set_lidar_point_client;
    webots_ros::set_int lidar_srv;
    webots_ros::set_bool lidar_point_srv;

    //使能激光雷达
    set_lidar_client = n->serviceClient<webots_ros::set_int>("/my_car/Sick_LMS_291/enable");
    set_lidar_point_client = n->serviceClient<webots_ros::set_bool>("/my_car/Sick_LMS_291/enable_point_cloud");
    lidar_srv.request.value=TIME_STEP;
    lidar_point_srv.request.value=true;

    if(set_lidar_client.call(lidar_srv) && lidar_srv.response.success)
    {
        ROS_INFO("lidar enable");
        //sub_lida3d_scan = n->subscribe<sensor_msgs::PointCloud>(std::string("/my_car/")+std::string("lidar/")+std::string("point_cloud"),10,lidar_callback);
        ROS_INFO("Topic for lidar initialized.");
        ROS_INFO("Topic for lidar scan connected.");
        if (set_lidar_point_client.call(lidar_point_srv) && lidar_point_srv.response.success)
            ROS_INFO("lidar pointclouds enabled .");
    }
    else
    {
        if (!lidar_srv.response.success)
            ROS_ERROR("Sampling period is not valid.");
        ROS_ERROR("Failed to enable lidar.");
        return 1;
    }


    /******************************************** supervisor ****************************************************** */
    ros::ServiceServer get_super_int32 = n->advertiseService("/my_car/supervisor/field/get_rotation",sup_int_callback);
    webots_ros::get_int sup_serve;


    ros::Publisher time = n->advertise<rosgraph_msgs::Clock>("/clock",10);

    /******************************************** 主循环 ****************************************************** */
    while (ros::ok()) {
        updateSpeed(); // 更新小车速度

        if (!timeStepClient.call(timeStepSrv) || !timeStepSrv.response.success) {
            ROS_ERROR("Failed to call service time_step for next step.");
            break;
        }
        rosgraph_msgs::Clock clock;
        clock.clock = ros::Time::now();
        time.publish(clock);//实时发布rosgraph_msgs::Clock信息

        ros::spinOnce();
    }
    timeStepSrv.request.value = 0;
    timeStepClient.call(timeStepSrv);

    ros::shutdown();
    return 0;
}


