// Generated by gencpp from file webots_ros/field_get_type_nameRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_TYPE_NAMEREQUEST_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_TYPE_NAMEREQUEST_H


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
struct field_get_type_nameRequest_
{
  typedef field_get_type_nameRequest_<ContainerAllocator> Type;

  field_get_type_nameRequest_()
    : field(0)  {
    }
  field_get_type_nameRequest_(const ContainerAllocator& _alloc)
    : field(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;





  typedef boost::shared_ptr< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_type_nameRequest_

typedef ::webots_ros::field_get_type_nameRequest_<std::allocator<void> > field_get_type_nameRequest;

typedef boost::shared_ptr< ::webots_ros::field_get_type_nameRequest > field_get_type_nameRequestPtr;
typedef boost::shared_ptr< ::webots_ros::field_get_type_nameRequest const> field_get_type_nameRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator1> & lhs, const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator1> & lhs, const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e05f2ccbc5e22655a0890e2557862bd";
  }

  static const char* value(const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e05f2ccbc5e2265ULL;
  static const uint64_t static_value2 = 0x5a0890e2557862bdULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/field_get_type_nameRequest";
  }

  static const char* value(const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
;
  }

  static const char* value(const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_type_nameRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::field_get_type_nameRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::field_get_type_nameRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_TYPE_NAMEREQUEST_H
