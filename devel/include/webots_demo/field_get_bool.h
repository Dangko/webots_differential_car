// Generated by gencpp from file webots_demo/field_get_bool.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_FIELD_GET_BOOL_H
#define WEBOTS_DEMO_MESSAGE_FIELD_GET_BOOL_H

#include <ros/service_traits.h>


#include <webots_demo/field_get_boolRequest.h>
#include <webots_demo/field_get_boolResponse.h>


namespace webots_demo
{

struct field_get_bool
{

typedef field_get_boolRequest Request;
typedef field_get_boolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_bool
} // namespace webots_demo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_demo::field_get_bool > {
  static const char* value()
  {
    return "24d7c18e96f008ad963cfb457ec58642";
  }

  static const char* value(const ::webots_demo::field_get_bool&) { return value(); }
};

template<>
struct DataType< ::webots_demo::field_get_bool > {
  static const char* value()
  {
    return "webots_demo/field_get_bool";
  }

  static const char* value(const ::webots_demo::field_get_bool&) { return value(); }
};


// service_traits::MD5Sum< ::webots_demo::field_get_boolRequest> should match
// service_traits::MD5Sum< ::webots_demo::field_get_bool >
template<>
struct MD5Sum< ::webots_demo::field_get_boolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_demo::field_get_bool >::value();
  }
  static const char* value(const ::webots_demo::field_get_boolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_demo::field_get_boolRequest> should match
// service_traits::DataType< ::webots_demo::field_get_bool >
template<>
struct DataType< ::webots_demo::field_get_boolRequest>
{
  static const char* value()
  {
    return DataType< ::webots_demo::field_get_bool >::value();
  }
  static const char* value(const ::webots_demo::field_get_boolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_demo::field_get_boolResponse> should match
// service_traits::MD5Sum< ::webots_demo::field_get_bool >
template<>
struct MD5Sum< ::webots_demo::field_get_boolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_demo::field_get_bool >::value();
  }
  static const char* value(const ::webots_demo::field_get_boolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_demo::field_get_boolResponse> should match
// service_traits::DataType< ::webots_demo::field_get_bool >
template<>
struct DataType< ::webots_demo::field_get_boolResponse>
{
  static const char* value()
  {
    return DataType< ::webots_demo::field_get_bool >::value();
  }
  static const char* value(const ::webots_demo::field_get_boolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_FIELD_GET_BOOL_H
