// Generated by gencpp from file hark_msgs/HarkJulius.msg
// DO NOT EDIT!


#ifndef HARK_MSGS_MESSAGE_HARKJULIUS_H
#define HARK_MSGS_MESSAGE_HARKJULIUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <hark_msgs/HarkJuliusSrc.h>

namespace hark_msgs
{
template <class ContainerAllocator>
struct HarkJulius_
{
  typedef HarkJulius_<ContainerAllocator> Type;

  HarkJulius_()
    : header()
    , src()  {
    }
  HarkJulius_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , src(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::hark_msgs::HarkJuliusSrc_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hark_msgs::HarkJuliusSrc_<ContainerAllocator> >::other >  _src_type;
  _src_type src;




  typedef boost::shared_ptr< ::hark_msgs::HarkJulius_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkJulius_<ContainerAllocator> const> ConstPtr;

}; // struct HarkJulius_

typedef ::hark_msgs::HarkJulius_<std::allocator<void> > HarkJulius;

typedef boost::shared_ptr< ::hark_msgs::HarkJulius > HarkJuliusPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkJulius const> HarkJuliusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hark_msgs::HarkJulius_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hark_msgs::HarkJulius_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'hark_msgs': ['/home/users/fri/mahathi_ws/src/hark_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hark_msgs::HarkJulius_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hark_msgs::HarkJulius_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkJulius_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkJulius_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkJulius_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkJulius_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkJulius_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18ac98bafa65529bae1ef5042e324284";
  }

  static const char* value(const ::hark_msgs::HarkJulius_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18ac98bafa65529bULL;
  static const uint64_t static_value2 = 0xae1ef5042e324284ULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkJulius_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hark_msgs/HarkJulius";
  }

  static const char* value(const ::hark_msgs::HarkJulius_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkJulius_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
HarkJuliusSrc[] src # Detail of Julius recognition result\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: hark_msgs/HarkJuliusSrc\n\
int32 id\n\
float32 azimuth\n\
float32 elevation\n\
int32 sec\n\
int32 usec\n\
int32 frames\n\
int32 msec\n\
int8 status            # status of recognition process defined below\n\
HarkJuliusSrcVal[] src # WHYPO results for each source\n\
\n\
int8 TERMINATED=0\n\
int8 STARTRECOG=1\n\
int8 INPUTPARAM=2\n\
int8 SOURCEINFO=3\n\
int8 RECOGOUT=4\n\
int8 RECOGFAIL=5\n\
\n\
================================================================================\n\
MSG: hark_msgs/HarkJuliusSrcVal\n\
string word\n\
int32 classid\n\
string phone\n\
float32 cm\n\
";
  }

  static const char* value(const ::hark_msgs::HarkJulius_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkJulius_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.src);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HarkJulius_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkJulius_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hark_msgs::HarkJulius_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "src[]" << std::endl;
    for (size_t i = 0; i < v.src.size(); ++i)
    {
      s << indent << "  src[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::hark_msgs::HarkJuliusSrc_<ContainerAllocator> >::stream(s, indent + "    ", v.src[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKJULIUS_H
