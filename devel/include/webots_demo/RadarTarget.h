// Generated by gencpp from file webots_demo/RadarTarget.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_RADARTARGET_H
#define WEBOTS_DEMO_MESSAGE_RADARTARGET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace webots_demo
{
template <class ContainerAllocator>
struct RadarTarget_
{
  typedef RadarTarget_<ContainerAllocator> Type;

  RadarTarget_()
    : header()
    , distance(0.0)
    , receivedPower(0.0)
    , speed(0.0)
    , azimuth(0.0)  {
    }
  RadarTarget_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , distance(0.0)
    , receivedPower(0.0)
    , speed(0.0)
    , azimuth(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _distance_type;
  _distance_type distance;

   typedef double _receivedPower_type;
  _receivedPower_type receivedPower;

   typedef double _speed_type;
  _speed_type speed;

   typedef double _azimuth_type;
  _azimuth_type azimuth;





  typedef boost::shared_ptr< ::webots_demo::RadarTarget_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::RadarTarget_<ContainerAllocator> const> ConstPtr;

}; // struct RadarTarget_

typedef ::webots_demo::RadarTarget_<std::allocator<void> > RadarTarget;

typedef boost::shared_ptr< ::webots_demo::RadarTarget > RadarTargetPtr;
typedef boost::shared_ptr< ::webots_demo::RadarTarget const> RadarTargetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::RadarTarget_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::RadarTarget_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::RadarTarget_<ContainerAllocator1> & lhs, const ::webots_demo::RadarTarget_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.distance == rhs.distance &&
    lhs.receivedPower == rhs.receivedPower &&
    lhs.speed == rhs.speed &&
    lhs.azimuth == rhs.azimuth;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::RadarTarget_<ContainerAllocator1> & lhs, const ::webots_demo::RadarTarget_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::RadarTarget_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::RadarTarget_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::RadarTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::RadarTarget_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::RadarTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::RadarTarget_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::RadarTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39dda2b01810c27987f6a767b1a78c1c";
  }

  static const char* value(const ::webots_demo::RadarTarget_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39dda2b01810c279ULL;
  static const uint64_t static_value2 = 0x87f6a767b1a78c1cULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::RadarTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/RadarTarget";
  }

  static const char* value(const ::webots_demo::RadarTarget_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::RadarTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 distance\n"
"float64 receivedPower\n"
"float64 speed\n"
"float64 azimuth\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::webots_demo::RadarTarget_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::RadarTarget_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.distance);
      stream.next(m.receivedPower);
      stream.next(m.speed);
      stream.next(m.azimuth);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RadarTarget_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::RadarTarget_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::RadarTarget_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "receivedPower: ";
    Printer<double>::stream(s, indent + "  ", v.receivedPower);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "azimuth: ";
    Printer<double>::stream(s, indent + "  ", v.azimuth);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_RADARTARGET_H
