// Generated by gencpp from file webots_ros/display_set_font.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_SET_FONT_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_SET_FONT_H

#include <ros/service_traits.h>


#include <webots_ros/display_set_fontRequest.h>
#include <webots_ros/display_set_fontResponse.h>


namespace webots_ros
{

struct display_set_font
{

typedef display_set_fontRequest Request;
typedef display_set_fontResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct display_set_font
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::display_set_font > {
  static const char* value()
  {
    return "78ff6c1f16d92deedcc7d16bd2cddfbf";
  }

  static const char* value(const ::webots_ros::display_set_font&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_set_font > {
  static const char* value()
  {
    return "webots_ros/display_set_font";
  }

  static const char* value(const ::webots_ros::display_set_font&) { return value(); }
};


// service_traits::MD5Sum< ::webots_ros::display_set_fontRequest> should match
// service_traits::MD5Sum< ::webots_ros::display_set_font >
template<>
struct MD5Sum< ::webots_ros::display_set_fontRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_font >::value();
  }
  static const char* value(const ::webots_ros::display_set_fontRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::display_set_fontRequest> should match
// service_traits::DataType< ::webots_ros::display_set_font >
template<>
struct DataType< ::webots_ros::display_set_fontRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_font >::value();
  }
  static const char* value(const ::webots_ros::display_set_fontRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_ros::display_set_fontResponse> should match
// service_traits::MD5Sum< ::webots_ros::display_set_font >
template<>
struct MD5Sum< ::webots_ros::display_set_fontResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_font >::value();
  }
  static const char* value(const ::webots_ros::display_set_fontResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::display_set_fontResponse> should match
// service_traits::DataType< ::webots_ros::display_set_font >
template<>
struct DataType< ::webots_ros::display_set_fontResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_font >::value();
  }
  static const char* value(const ::webots_ros::display_set_fontResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_SET_FONT_H
