// Generated by gencpp from file webots_demo/lidar_get_layer_point_cloud.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_LIDAR_GET_LAYER_POINT_CLOUD_H
#define WEBOTS_DEMO_MESSAGE_LIDAR_GET_LAYER_POINT_CLOUD_H

#include <ros/service_traits.h>


#include <webots_demo/lidar_get_layer_point_cloudRequest.h>
#include <webots_demo/lidar_get_layer_point_cloudResponse.h>


namespace webots_demo
{

struct lidar_get_layer_point_cloud
{

typedef lidar_get_layer_point_cloudRequest Request;
typedef lidar_get_layer_point_cloudResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct lidar_get_layer_point_cloud
} // namespace webots_demo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_demo::lidar_get_layer_point_cloud > {
  static const char* value()
  {
    return "9620f6bf808309a1da1889afe972eac6";
  }

  static const char* value(const ::webots_demo::lidar_get_layer_point_cloud&) { return value(); }
};

template<>
struct DataType< ::webots_demo::lidar_get_layer_point_cloud > {
  static const char* value()
  {
    return "webots_demo/lidar_get_layer_point_cloud";
  }

  static const char* value(const ::webots_demo::lidar_get_layer_point_cloud&) { return value(); }
};


// service_traits::MD5Sum< ::webots_demo::lidar_get_layer_point_cloudRequest> should match
// service_traits::MD5Sum< ::webots_demo::lidar_get_layer_point_cloud >
template<>
struct MD5Sum< ::webots_demo::lidar_get_layer_point_cloudRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_demo::lidar_get_layer_point_cloud >::value();
  }
  static const char* value(const ::webots_demo::lidar_get_layer_point_cloudRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_demo::lidar_get_layer_point_cloudRequest> should match
// service_traits::DataType< ::webots_demo::lidar_get_layer_point_cloud >
template<>
struct DataType< ::webots_demo::lidar_get_layer_point_cloudRequest>
{
  static const char* value()
  {
    return DataType< ::webots_demo::lidar_get_layer_point_cloud >::value();
  }
  static const char* value(const ::webots_demo::lidar_get_layer_point_cloudRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_demo::lidar_get_layer_point_cloudResponse> should match
// service_traits::MD5Sum< ::webots_demo::lidar_get_layer_point_cloud >
template<>
struct MD5Sum< ::webots_demo::lidar_get_layer_point_cloudResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_demo::lidar_get_layer_point_cloud >::value();
  }
  static const char* value(const ::webots_demo::lidar_get_layer_point_cloudResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_demo::lidar_get_layer_point_cloudResponse> should match
// service_traits::DataType< ::webots_demo::lidar_get_layer_point_cloud >
template<>
struct DataType< ::webots_demo::lidar_get_layer_point_cloudResponse>
{
  static const char* value()
  {
    return DataType< ::webots_demo::lidar_get_layer_point_cloud >::value();
  }
  static const char* value(const ::webots_demo::lidar_get_layer_point_cloudResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_LIDAR_GET_LAYER_POINT_CLOUD_H