// Generated by gencpp from file webots_demo/field_get_nodeResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_FIELD_GET_NODERESPONSE_H
#define WEBOTS_DEMO_MESSAGE_FIELD_GET_NODERESPONSE_H


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
struct field_get_nodeResponse_
{
  typedef field_get_nodeResponse_<ContainerAllocator> Type;

  field_get_nodeResponse_()
    : node(0)  {
    }
  field_get_nodeResponse_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_nodeResponse_

typedef ::webots_demo::field_get_nodeResponse_<std::allocator<void> > field_get_nodeResponse;

typedef boost::shared_ptr< ::webots_demo::field_get_nodeResponse > field_get_nodeResponsePtr;
typedef boost::shared_ptr< ::webots_demo::field_get_nodeResponse const> field_get_nodeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::field_get_nodeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::field_get_nodeResponse_<ContainerAllocator1> & lhs, const ::webots_demo::field_get_nodeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::field_get_nodeResponse_<ContainerAllocator1> & lhs, const ::webots_demo::field_get_nodeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::webots_demo::field_get_nodeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/field_get_nodeResponse";
  }

  static const char* value(const ::webots_demo::field_get_nodeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"\n"
;
  }

  static const char* value(const ::webots_demo::field_get_nodeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_nodeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::field_get_nodeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::field_get_nodeResponse_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_FIELD_GET_NODERESPONSE_H
