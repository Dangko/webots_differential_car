// Generated by gencpp from file webots_demo/get_uint64Response.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_GET_UINT64RESPONSE_H
#define WEBOTS_DEMO_MESSAGE_GET_UINT64RESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace webots_demo
{
template <class ContainerAllocator>
struct get_uint64Response_
{
  typedef get_uint64Response_<ContainerAllocator> Type;

  get_uint64Response_()
    : value(0)  {
    }
  get_uint64Response_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef uint64_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::webots_demo::get_uint64Response_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::get_uint64Response_<ContainerAllocator> const> ConstPtr;

}; // struct get_uint64Response_

typedef ::webots_demo::get_uint64Response_<std::allocator<void> > get_uint64Response;

typedef boost::shared_ptr< ::webots_demo::get_uint64Response > get_uint64ResponsePtr;
typedef boost::shared_ptr< ::webots_demo::get_uint64Response const> get_uint64ResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::get_uint64Response_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::get_uint64Response_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::get_uint64Response_<ContainerAllocator1> & lhs, const ::webots_demo::get_uint64Response_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::get_uint64Response_<ContainerAllocator1> & lhs, const ::webots_demo::get_uint64Response_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::get_uint64Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::get_uint64Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::get_uint64Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::get_uint64Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::get_uint64Response_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::get_uint64Response_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::get_uint64Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2c9fb44e48f75feda2746b01055cfa1";
  }

  static const char* value(const ::webots_demo::get_uint64Response_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2c9fb44e48f75feULL;
  static const uint64_t static_value2 = 0xda2746b01055cfa1ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::get_uint64Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/get_uint64Response";
  }

  static const char* value(const ::webots_demo::get_uint64Response_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::get_uint64Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 value\n"
"\n"
;
  }

  static const char* value(const ::webots_demo::get_uint64Response_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::get_uint64Response_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_uint64Response_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::get_uint64Response_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::get_uint64Response_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_GET_UINT64RESPONSE_H
