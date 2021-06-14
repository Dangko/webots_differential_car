// Generated by gencpp from file webots_ros/display_get_infoResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_GET_INFORESPONSE_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_GET_INFORESPONSE_H


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
struct display_get_infoResponse_
{
  typedef display_get_infoResponse_<ContainerAllocator> Type;

  display_get_infoResponse_()
    : width(0)
    , height(0)  {
    }
  display_get_infoResponse_(const ContainerAllocator& _alloc)
    : width(0)
    , height(0)  {
  (void)_alloc;
    }



   typedef uint32_t _width_type;
  _width_type width;

   typedef uint32_t _height_type;
  _height_type height;





  typedef boost::shared_ptr< ::webots_ros::display_get_infoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::display_get_infoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct display_get_infoResponse_

typedef ::webots_ros::display_get_infoResponse_<std::allocator<void> > display_get_infoResponse;

typedef boost::shared_ptr< ::webots_ros::display_get_infoResponse > display_get_infoResponsePtr;
typedef boost::shared_ptr< ::webots_ros::display_get_infoResponse const> display_get_infoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::display_get_infoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::display_get_infoResponse_<ContainerAllocator1> & lhs, const ::webots_ros::display_get_infoResponse_<ContainerAllocator2> & rhs)
{
  return lhs.width == rhs.width &&
    lhs.height == rhs.height;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::display_get_infoResponse_<ContainerAllocator1> & lhs, const ::webots_ros::display_get_infoResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::display_get_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::display_get_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::display_get_infoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d00b1659f7d843bad3388af53e042f94";
  }

  static const char* value(const ::webots_ros::display_get_infoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd00b1659f7d843baULL;
  static const uint64_t static_value2 = 0xd3388af53e042f94ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/display_get_infoResponse";
  }

  static const char* value(const ::webots_ros::display_get_infoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 width\n"
"uint32 height\n"
"\n"
;
  }

  static const char* value(const ::webots_ros::display_get_infoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.width);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_get_infoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::display_get_infoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::display_get_infoResponse_<ContainerAllocator>& v)
  {
    s << indent << "width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_GET_INFORESPONSE_H
