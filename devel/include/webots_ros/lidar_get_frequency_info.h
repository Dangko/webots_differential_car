// Generated by gencpp from file webots_ros/lidar_get_frequency_info.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_LIDAR_GET_FREQUENCY_INFO_H
#define WEBOTS_ROS_MESSAGE_LIDAR_GET_FREQUENCY_INFO_H

#include <ros/service_traits.h>


#include <webots_ros/lidar_get_frequency_infoRequest.h>
#include <webots_ros/lidar_get_frequency_infoResponse.h>


namespace webots_ros
{

struct lidar_get_frequency_info
{

typedef lidar_get_frequency_infoRequest Request;
typedef lidar_get_frequency_infoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct lidar_get_frequency_info
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::lidar_get_frequency_info > {
  static const char* value()
  {
    return "205acd1972da2259229a25bf7e756656";
  }

  static const char* value(const ::webots_ros::lidar_get_frequency_info&) { return value(); }
};

template<>
struct DataType< ::webots_ros::lidar_get_frequency_info > {
  static const char* value()
  {
    return "webots_ros/lidar_get_frequency_info";
  }

  static const char* value(const ::webots_ros::lidar_get_frequency_info&) { return value(); }
};


// service_traits::MD5Sum< ::webots_ros::lidar_get_frequency_infoRequest> should match
// service_traits::MD5Sum< ::webots_ros::lidar_get_frequency_info >
template<>
struct MD5Sum< ::webots_ros::lidar_get_frequency_infoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::webots_ros::lidar_get_frequency_infoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::lidar_get_frequency_infoRequest> should match
// service_traits::DataType< ::webots_ros::lidar_get_frequency_info >
template<>
struct DataType< ::webots_ros::lidar_get_frequency_infoRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::webots_ros::lidar_get_frequency_infoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_ros::lidar_get_frequency_infoResponse> should match
// service_traits::MD5Sum< ::webots_ros::lidar_get_frequency_info >
template<>
struct MD5Sum< ::webots_ros::lidar_get_frequency_infoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::webots_ros::lidar_get_frequency_infoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::lidar_get_frequency_infoResponse> should match
// service_traits::DataType< ::webots_ros::lidar_get_frequency_info >
template<>
struct DataType< ::webots_ros::lidar_get_frequency_infoResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::webots_ros::lidar_get_frequency_infoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_LIDAR_GET_FREQUENCY_INFO_H
