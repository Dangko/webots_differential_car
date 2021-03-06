// Generated by gencpp from file webots_ros/receiver_get_emitter_direction.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_RECEIVER_GET_EMITTER_DIRECTION_H
#define WEBOTS_ROS_MESSAGE_RECEIVER_GET_EMITTER_DIRECTION_H

#include <ros/service_traits.h>


#include <webots_ros/receiver_get_emitter_directionRequest.h>
#include <webots_ros/receiver_get_emitter_directionResponse.h>


namespace webots_ros
{

struct receiver_get_emitter_direction
{

typedef receiver_get_emitter_directionRequest Request;
typedef receiver_get_emitter_directionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct receiver_get_emitter_direction
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::receiver_get_emitter_direction > {
  static const char* value()
  {
    return "cad5a90bedce22b568c949b40e9cc6e0";
  }

  static const char* value(const ::webots_ros::receiver_get_emitter_direction&) { return value(); }
};

template<>
struct DataType< ::webots_ros::receiver_get_emitter_direction > {
  static const char* value()
  {
    return "webots_ros/receiver_get_emitter_direction";
  }

  static const char* value(const ::webots_ros::receiver_get_emitter_direction&) { return value(); }
};


// service_traits::MD5Sum< ::webots_ros::receiver_get_emitter_directionRequest> should match
// service_traits::MD5Sum< ::webots_ros::receiver_get_emitter_direction >
template<>
struct MD5Sum< ::webots_ros::receiver_get_emitter_directionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_emitter_directionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::receiver_get_emitter_directionRequest> should match
// service_traits::DataType< ::webots_ros::receiver_get_emitter_direction >
template<>
struct DataType< ::webots_ros::receiver_get_emitter_directionRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_emitter_directionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_ros::receiver_get_emitter_directionResponse> should match
// service_traits::MD5Sum< ::webots_ros::receiver_get_emitter_direction >
template<>
struct MD5Sum< ::webots_ros::receiver_get_emitter_directionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_emitter_directionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_ros::receiver_get_emitter_directionResponse> should match
// service_traits::DataType< ::webots_ros::receiver_get_emitter_direction >
template<>
struct DataType< ::webots_ros::receiver_get_emitter_directionResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_emitter_direction >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_emitter_directionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_RECEIVER_GET_EMITTER_DIRECTION_H
