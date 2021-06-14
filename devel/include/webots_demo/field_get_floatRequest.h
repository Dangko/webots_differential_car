// Generated by gencpp from file webots_demo/field_get_floatRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_FIELD_GET_FLOATREQUEST_H
#define WEBOTS_DEMO_MESSAGE_FIELD_GET_FLOATREQUEST_H


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
struct field_get_floatRequest_
{
  typedef field_get_floatRequest_<ContainerAllocator> Type;

  field_get_floatRequest_()
    : field(0)
    , index(0)  {
    }
  field_get_floatRequest_(const ContainerAllocator& _alloc)
    : field(0)
    , index(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;

   typedef int32_t _index_type;
  _index_type index;





  typedef boost::shared_ptr< ::webots_demo::field_get_floatRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::field_get_floatRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_floatRequest_

typedef ::webots_demo::field_get_floatRequest_<std::allocator<void> > field_get_floatRequest;

typedef boost::shared_ptr< ::webots_demo::field_get_floatRequest > field_get_floatRequestPtr;
typedef boost::shared_ptr< ::webots_demo::field_get_floatRequest const> field_get_floatRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::field_get_floatRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::field_get_floatRequest_<ContainerAllocator1> & lhs, const ::webots_demo::field_get_floatRequest_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field &&
    lhs.index == rhs.index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::field_get_floatRequest_<ContainerAllocator1> & lhs, const ::webots_demo::field_get_floatRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::field_get_floatRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::field_get_floatRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::field_get_floatRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "828947932ebb9e813d3ef918f20f0d81";
  }

  static const char* value(const ::webots_demo::field_get_floatRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x828947932ebb9e81ULL;
  static const uint64_t static_value2 = 0x3d3ef918f20f0d81ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/field_get_floatRequest";
  }

  static const char* value(const ::webots_demo::field_get_floatRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
"int32 index\n"
;
  }

  static const char* value(const ::webots_demo::field_get_floatRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
      stream.next(m.index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_floatRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::field_get_floatRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::field_get_floatRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_FIELD_GET_FLOATREQUEST_H
