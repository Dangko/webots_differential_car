// Generated by gencpp from file webots_ros/display_image_paste.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_PASTE_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_PASTE_H

#include <ros/service_traits.h>


#include <webots_ros/display_image_pasteRequest.h>
#include <webots_ros/display_image_pasteResponse.h>


namespace webots_ros
{

struct display_image_paste
{

typedef display_image_pasteRequest Request;
typedef display_image_pasteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct display_image_paste
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::display_image_paste > {
  static const char* value()
  {
    return "58100642be61cff1b755b0787ba1decc";
  }

  static const char* value(const ::webots_ros::display_image_paste&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_image_paste > {
  static const char* value()
  {
    return "webots_ros/display_image_paste";
  }

  static const char* value(const ::webots_ros::display_image_paste&) { return value(); }
};


// service_traits::MD5Sum< ::webots_ros::display_image_pasteRequest> should match
// service_traits::MD5Sum< ::webots_ros::display_image_paste >
template<>
struct MD5Sum< ::webots_ros::display_image_pasteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::display_image_pasteRequest> should match
// service_traits::DataType< ::webots_ros::display_image_paste >
template<>
struct DataType< ::webots_ros::display_image_pasteRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_ros::display_image_pasteResponse> should match
// service_traits::MD5Sum< ::webots_ros::display_image_paste >
template<>
struct MD5Sum< ::webots_ros::display_image_pasteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::display_image_pasteResponse> should match
// service_traits::DataType< ::webots_ros::display_image_paste >
template<>
struct DataType< ::webots_ros::display_image_pasteResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_PASTE_H
