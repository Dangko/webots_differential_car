// Generated by gencpp from file webots_ros/set_int.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_SET_INT_H
#define WEBOTS_ROS_MESSAGE_SET_INT_H

#include <ros/service_traits.h>


#include <webots_ros/set_intRequest.h>
#include <webots_ros/set_intResponse.h>


namespace webots_ros
{

struct set_int
{

typedef set_intRequest Request;
typedef set_intResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct set_int
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::set_int > {
  static const char* value()
  {
    return "bc437afb45673379bdb9f299f9cbbc9e";
  }

  static const char* value(const ::webots_ros::set_int&) { return value(); }
};

template<>
struct DataType< ::webots_ros::set_int > {
  static const char* value()
  {
    return "webots_ros/set_int";
  }

  static const char* value(const ::webots_ros::set_int&) { return value(); }
};


// service_traits::MD5Sum< ::webots_ros::set_intRequest> should match
// service_traits::MD5Sum< ::webots_ros::set_int >
template<>
struct MD5Sum< ::webots_ros::set_intRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::set_int >::value();
  }
  static const char* value(const ::webots_ros::set_intRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::set_intRequest> should match
// service_traits::DataType< ::webots_ros::set_int >
template<>
struct DataType< ::webots_ros::set_intRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::set_int >::value();
  }
  static const char* value(const ::webots_ros::set_intRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_ros::set_intResponse> should match
// service_traits::MD5Sum< ::webots_ros::set_int >
template<>
struct MD5Sum< ::webots_ros::set_intResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::set_int >::value();
  }
  static const char* value(const ::webots_ros::set_intResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::set_intResponse> should match
// service_traits::DataType< ::webots_ros::set_int >
template<>
struct DataType< ::webots_ros::set_intResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::set_int >::value();
  }
  static const char* value(const ::webots_ros::set_intResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SET_INT_H
