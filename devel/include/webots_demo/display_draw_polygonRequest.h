// Generated by gencpp from file webots_demo/display_draw_polygonRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_DISPLAY_DRAW_POLYGONREQUEST_H
#define WEBOTS_DEMO_MESSAGE_DISPLAY_DRAW_POLYGONREQUEST_H


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
struct display_draw_polygonRequest_
{
  typedef display_draw_polygonRequest_<ContainerAllocator> Type;

  display_draw_polygonRequest_()
    : x()
    , y()
    , size(0)  {
    }
  display_draw_polygonRequest_(const ContainerAllocator& _alloc)
    : x(_alloc)
    , y(_alloc)
    , size(0)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _x_type;
  _x_type x;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _y_type;
  _y_type y;

   typedef int32_t _size_type;
  _size_type size;





  typedef boost::shared_ptr< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> const> ConstPtr;

}; // struct display_draw_polygonRequest_

typedef ::webots_demo::display_draw_polygonRequest_<std::allocator<void> > display_draw_polygonRequest;

typedef boost::shared_ptr< ::webots_demo::display_draw_polygonRequest > display_draw_polygonRequestPtr;
typedef boost::shared_ptr< ::webots_demo::display_draw_polygonRequest const> display_draw_polygonRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator1> & lhs, const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.size == rhs.size;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator1> & lhs, const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45140bfdfc5d8a44cc51b5a3d292b11c";
  }

  static const char* value(const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45140bfdfc5d8a44ULL;
  static const uint64_t static_value2 = 0xcc51b5a3d292b11cULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/display_draw_polygonRequest";
  }

  static const char* value(const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] x\n"
"int32[] y\n"
"int32 size\n"
;
  }

  static const char* value(const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_draw_polygonRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::display_draw_polygonRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::display_draw_polygonRequest_<ContainerAllocator>& v)
  {
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.y[i]);
    }
    s << indent << "size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_DISPLAY_DRAW_POLYGONREQUEST_H
