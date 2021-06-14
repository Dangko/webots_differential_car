// Generated by gencpp from file webots_demo/supervisor_movie_start_recordingRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_DEMO_MESSAGE_SUPERVISOR_MOVIE_START_RECORDINGREQUEST_H
#define WEBOTS_DEMO_MESSAGE_SUPERVISOR_MOVIE_START_RECORDINGREQUEST_H


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
struct supervisor_movie_start_recordingRequest_
{
  typedef supervisor_movie_start_recordingRequest_<ContainerAllocator> Type;

  supervisor_movie_start_recordingRequest_()
    : filename()
    , width(0)
    , height(0)
    , codec(0)
    , quality(0)
    , acceleration(0)
    , caption(0)  {
    }
  supervisor_movie_start_recordingRequest_(const ContainerAllocator& _alloc)
    : filename(_alloc)
    , width(0)
    , height(0)
    , codec(0)
    , quality(0)
    , acceleration(0)
    , caption(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;

   typedef int32_t _width_type;
  _width_type width;

   typedef int32_t _height_type;
  _height_type height;

   typedef int32_t _codec_type;
  _codec_type codec;

   typedef int32_t _quality_type;
  _quality_type quality;

   typedef int32_t _acceleration_type;
  _acceleration_type acceleration;

   typedef uint8_t _caption_type;
  _caption_type caption;





  typedef boost::shared_ptr< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_movie_start_recordingRequest_

typedef ::webots_demo::supervisor_movie_start_recordingRequest_<std::allocator<void> > supervisor_movie_start_recordingRequest;

typedef boost::shared_ptr< ::webots_demo::supervisor_movie_start_recordingRequest > supervisor_movie_start_recordingRequestPtr;
typedef boost::shared_ptr< ::webots_demo::supervisor_movie_start_recordingRequest const> supervisor_movie_start_recordingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator1> & lhs, const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.filename == rhs.filename &&
    lhs.width == rhs.width &&
    lhs.height == rhs.height &&
    lhs.codec == rhs.codec &&
    lhs.quality == rhs.quality &&
    lhs.acceleration == rhs.acceleration &&
    lhs.caption == rhs.caption;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator1> & lhs, const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6002a2a6b3b34251dd3d092b3750f050";
  }

  static const char* value(const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6002a2a6b3b34251ULL;
  static const uint64_t static_value2 = 0xdd3d092b3750f050ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_demo/supervisor_movie_start_recordingRequest";
  }

  static const char* value(const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string filename\n"
"int32 width\n"
"int32 height\n"
"int32 codec\n"
"int32 quality\n"
"int32 acceleration\n"
"uint8 caption\n"
;
  }

  static const char* value(const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.codec);
      stream.next(m.quality);
      stream.next(m.acceleration);
      stream.next(m.caption);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_movie_start_recordingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_demo::supervisor_movie_start_recordingRequest_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
    s << indent << "codec: ";
    Printer<int32_t>::stream(s, indent + "  ", v.codec);
    s << indent << "quality: ";
    Printer<int32_t>::stream(s, indent + "  ", v.quality);
    s << indent << "acceleration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acceleration);
    s << indent << "caption: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.caption);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_DEMO_MESSAGE_SUPERVISOR_MOVIE_START_RECORDINGREQUEST_H
