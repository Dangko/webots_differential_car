// Generated by gencpp from file webots_ros/get_intRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_GET_INTREQUEST_H
#define WEBOTS_ROS_MESSAGE_GET_INTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace webots_ros
{
template <class ContainerAllocator>
struct get_intRequest_
{
  typedef get_intRequest_<ContainerAllocator> Type;

  get_intRequest_()
    : ask(false)  {
    }
  get_intRequest_(const ContainerAllocator& _alloc)
    : ask(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::webots_ros::get_intRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::get_intRequest_<ContainerAllocator> const> ConstPtr;

}; // struct get_intRequest_

typedef ::webots_ros::get_intRequest_<std::allocator<void> > get_intRequest;

typedef boost::shared_ptr< ::webots_ros::get_intRequest > get_intRequestPtr;
typedef boost::shared_ptr< ::webots_ros::get_intRequest const> get_intRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::get_intRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::get_intRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::get_intRequest_<ContainerAllocator1> & lhs, const ::webots_ros::get_intRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ask == rhs.ask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::get_intRequest_<ContainerAllocator1> & lhs, const ::webots_ros::get_intRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::get_intRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::get_intRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::get_intRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::get_intRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::get_intRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::get_intRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::get_intRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbe9700edfca44c5eefb040d9b60f6d6";
  }

  static const char* value(const ::webots_ros::get_intRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbe9700edfca44c5ULL;
  static const uint64_t static_value2 = 0xeefb040d9b60f6d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::get_intRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/get_intRequest";
  }

  static const char* value(const ::webots_ros::get_intRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::get_intRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ask\n"
;
  }

  static const char* value(const ::webots_ros::get_intRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::get_intRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_intRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::get_intRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::get_intRequest_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_GET_INTREQUEST_H