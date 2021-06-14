// Generated by gencpp from file webots_ros/display_draw_ovalRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_OVALREQUEST_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_OVALREQUEST_H


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
struct display_draw_ovalRequest_
{
  typedef display_draw_ovalRequest_<ContainerAllocator> Type;

  display_draw_ovalRequest_()
    : cx(0)
    , cy(0)
    , a(0)
    , b(0)  {
    }
  display_draw_ovalRequest_(const ContainerAllocator& _alloc)
    : cx(0)
    , cy(0)
    , a(0)
    , b(0)  {
  (void)_alloc;
    }



   typedef int32_t _cx_type;
  _cx_type cx;

   typedef int32_t _cy_type;
  _cy_type cy;

   typedef int32_t _a_type;
  _a_type a;

   typedef int32_t _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct display_draw_ovalRequest_

typedef ::webots_ros::display_draw_ovalRequest_<std::allocator<void> > display_draw_ovalRequest;

typedef boost::shared_ptr< ::webots_ros::display_draw_ovalRequest > display_draw_ovalRequestPtr;
typedef boost::shared_ptr< ::webots_ros::display_draw_ovalRequest const> display_draw_ovalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator1> & lhs, const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cx == rhs.cx &&
    lhs.cy == rhs.cy &&
    lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator1> & lhs, const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "78363f0f1b453e74fe20a86614ff165b";
  }

  static const char* value(const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x78363f0f1b453e74ULL;
  static const uint64_t static_value2 = 0xfe20a86614ff165bULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/display_draw_ovalRequest";
  }

  static const char* value(const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 cx\n"
"int32 cy\n"
"int32 a\n"
"int32 b\n"
;
  }

  static const char* value(const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cx);
      stream.next(m.cy);
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_draw_ovalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::display_draw_ovalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::display_draw_ovalRequest_<ContainerAllocator>& v)
  {
    s << indent << "cx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cx);
    s << indent << "cy: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cy);
    s << indent << "a: ";
    Printer<int32_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int32_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_OVALREQUEST_H
