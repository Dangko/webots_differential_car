// Generated by gencpp from file webots_demo/field_set_rotationResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_FIELD_SET_ROTATIONRESPONSE_H
#define WEBOTS_DEMO_MESSAGE_FIELD_SET_ROTATIONRESPONSE_H


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
struct field_set_rotationResponse_
{
  typedef field_set_rotationResponse_<ContainerAllocator> Type;

  field_set_rotationResponse_()
    : success(0)  {
    }
  field_set_rotationResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int32_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_set_rotationResponse_

typedef ::webots_demo::field_set_rotationResponse_<std::allocator<void> > field_set_rotationResponse;

typedef boost::shared_ptr< ::webots_demo::field_set_rotationResponse > field_set_rotationResponsePtr;
typedef boost::shared_ptr< ::webots_demo::field_set_rotationResponse const> field_set_rotationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::field_set_rotationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::field_set_rotationResponse_<ContainerAllocator1> & lhs, const ::webots_demo::field_set_rotationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::field_set_rotationResponse_<ContainerAllocator1> & lhs, const ::webots_demo::field_set_rotationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c2bcf2ff0894cb3058b1bf4c8c4175a";
  }

  static const char* value(const ::webots_demo::field_set_rotationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c2bcf2ff0894cb3ULL;
  static const uint64_t static_value2 = 0x058b1bf4c8c4175aULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/field_set_rotationResponse";
  }

  static const char* value(const ::webots_demo::field_set_rotationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 success\n"
"\n"
;
  }

  static const char* value(const ::webots_demo::field_set_rotationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_set_rotationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::field_set_rotationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::field_set_rotationResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int32_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_FIELD_SET_ROTATIONRESPONSE_H
