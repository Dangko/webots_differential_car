// Generated by gencpp from file webots_ros/mouse_get_stateResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_MOUSE_GET_STATERESPONSE_H
#define WEBOTS_ROS_MESSAGE_MOUSE_GET_STATERESPONSE_H


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
struct mouse_get_stateResponse_
{
  typedef mouse_get_stateResponse_<ContainerAllocator> Type;

  mouse_get_stateResponse_()
    : left(0)
    , middle(0)
    , right(0)
    , u(0.0)
    , v(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  mouse_get_stateResponse_(const ContainerAllocator& _alloc)
    : left(0)
    , middle(0)
    , right(0)
    , u(0.0)
    , v(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _left_type;
  _left_type left;

   typedef uint8_t _middle_type;
  _middle_type middle;

   typedef uint8_t _right_type;
  _right_type right;

   typedef double _u_type;
  _u_type u;

   typedef double _v_type;
  _v_type v;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct mouse_get_stateResponse_

typedef ::webots_ros::mouse_get_stateResponse_<std::allocator<void> > mouse_get_stateResponse;

typedef boost::shared_ptr< ::webots_ros::mouse_get_stateResponse > mouse_get_stateResponsePtr;
typedef boost::shared_ptr< ::webots_ros::mouse_get_stateResponse const> mouse_get_stateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator1> & lhs, const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator2> & rhs)
{
  return lhs.left == rhs.left &&
    lhs.middle == rhs.middle &&
    lhs.right == rhs.right &&
    lhs.u == rhs.u &&
    lhs.v == rhs.v &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator1> & lhs, const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17a814b3dc69927476b5cde7968ba299";
  }

  static const char* value(const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17a814b3dc699274ULL;
  static const uint64_t static_value2 = 0x76b5cde7968ba299ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/mouse_get_stateResponse";
  }

  static const char* value(const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 left\n"
"uint8 middle\n"
"uint8 right\n"
"float64 u\n"
"float64 v\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
;
  }

  static const char* value(const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left);
      stream.next(m.middle);
      stream.next(m.right);
      stream.next(m.u);
      stream.next(m.v);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mouse_get_stateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::mouse_get_stateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::mouse_get_stateResponse_<ContainerAllocator>& v)
  {
    s << indent << "left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left);
    s << indent << "middle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.middle);
    s << indent << "right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.right);
    s << indent << "u: ";
    Printer<double>::stream(s, indent + "  ", v.u);
    s << indent << "v: ";
    Printer<double>::stream(s, indent + "  ", v.v);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOUSE_GET_STATERESPONSE_H