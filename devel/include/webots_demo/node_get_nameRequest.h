// Generated by gencpp from file webots_demo/node_get_nameRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_NODE_GET_NAMEREQUEST_H
#define WEBOTS_DEMO_MESSAGE_NODE_GET_NAMEREQUEST_H


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
struct node_get_nameRequest_
{
  typedef node_get_nameRequest_<ContainerAllocator> Type;

  node_get_nameRequest_()
    : node(0)  {
    }
  node_get_nameRequest_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::webots_demo::node_get_nameRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::node_get_nameRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_nameRequest_

typedef ::webots_demo::node_get_nameRequest_<std::allocator<void> > node_get_nameRequest;

typedef boost::shared_ptr< ::webots_demo::node_get_nameRequest > node_get_nameRequestPtr;
typedef boost::shared_ptr< ::webots_demo::node_get_nameRequest const> node_get_nameRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::node_get_nameRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::node_get_nameRequest_<ContainerAllocator1> & lhs, const ::webots_demo::node_get_nameRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::node_get_nameRequest_<ContainerAllocator1> & lhs, const ::webots_demo::node_get_nameRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::node_get_nameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::node_get_nameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::node_get_nameRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::webots_demo::node_get_nameRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/node_get_nameRequest";
  }

  static const char* value(const ::webots_demo::node_get_nameRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
;
  }

  static const char* value(const ::webots_demo::node_get_nameRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_nameRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::node_get_nameRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::node_get_nameRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_NODE_GET_NAMEREQUEST_H
