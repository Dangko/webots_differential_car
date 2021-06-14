// Generated by gencpp from file webots_demo/supervisor_get_from_def.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_SUPERVISOR_GET_FROM_DEF_H
#define WEBOTS_DEMO_MESSAGE_SUPERVISOR_GET_FROM_DEF_H

#include <ros/service_traits.h>


#include <webots_demo/supervisor_get_from_defRequest.h>
#include <webots_demo/supervisor_get_from_defResponse.h>


namespace webots_demo
{

struct supervisor_get_from_def
{

typedef supervisor_get_from_defRequest Request;
typedef supervisor_get_from_defResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct supervisor_get_from_def
} // namespace webots_demo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_demo::supervisor_get_from_def > {
  static const char* value()
  {
    return "6f2b7f6ebcd546dbcec5be5ad142c165";
  }

  static const char* value(const ::webots_demo::supervisor_get_from_def&) { return value(); }
};

template<>
struct DataType< ::webots_demo::supervisor_get_from_def > {
  static const char* value()
  {
    return "webots_demo/supervisor_get_from_def";
  }

  static const char* value(const ::webots_demo::supervisor_get_from_def&) { return value(); }
};


// service_traits::MD5Sum< ::webots_demo::supervisor_get_from_defRequest> should match
// service_traits::MD5Sum< ::webots_demo::supervisor_get_from_def >
template<>
struct MD5Sum< ::webots_demo::supervisor_get_from_defRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_demo::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_demo::supervisor_get_from_defRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_demo::supervisor_get_from_defRequest> should match
// service_traits::DataType< ::webots_demo::supervisor_get_from_def >
template<>
struct DataType< ::webots_demo::supervisor_get_from_defRequest>
{
  static const char* value()
  {
    return DataType< ::webots_demo::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_demo::supervisor_get_from_defRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::webots_demo::supervisor_get_from_defResponse> should match
// service_traits::MD5Sum< ::webots_demo::supervisor_get_from_def >
template<>
struct MD5Sum< ::webots_demo::supervisor_get_from_defResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_demo::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_demo::supervisor_get_from_defResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::webots_demo::supervisor_get_from_defResponse> should match
// service_traits::DataType< ::webots_demo::supervisor_get_from_def >
template<>
struct DataType< ::webots_demo::supervisor_get_from_defResponse>
{
  static const char* value()
  {
    return DataType< ::webots_demo::supervisor_get_from_def >::value();
  }
  static const char* value(const ::webots_demo::supervisor_get_from_defResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_SUPERVISOR_GET_FROM_DEF_H