// Generated by gencpp from file hark_msgs/HarkWaveVal.msg
// DO NOT EDIT!


#ifndef HARK_MSGS_MESSAGE_HARKWAVEVAL_H
#define HARK_MSGS_MESSAGE_HARKWAVEVAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hark_msgs
{
template <class ContainerAllocator>
struct HarkWaveVal_
{
  typedef HarkWaveVal_<ContainerAllocator> Type;

  HarkWaveVal_()
    : wavedata()  {
    }
  HarkWaveVal_(const ContainerAllocator& _alloc)
    : wavedata(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _wavedata_type;
  _wavedata_type wavedata;




  typedef boost::shared_ptr< ::hark_msgs::HarkWaveVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkWaveVal_<ContainerAllocator> const> ConstPtr;

}; // struct HarkWaveVal_

typedef ::hark_msgs::HarkWaveVal_<std::allocator<void> > HarkWaveVal;

typedef boost::shared_ptr< ::hark_msgs::HarkWaveVal > HarkWaveValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkWaveVal const> HarkWaveValConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hark_msgs::HarkWaveVal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hark_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'hark_msgs': ['/home/users/fri/mahathi_ws/src/hark_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hark_msgs::HarkWaveVal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkWaveVal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkWaveVal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d4ffa9fffe078365bb941098c16cdfd";
  }

  static const char* value(const ::hark_msgs::HarkWaveVal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d4ffa9fffe07836ULL;
  static const uint64_t static_value2 = 0x5bb941098c16cdfdULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hark_msgs/HarkWaveVal";
  }

  static const char* value(const ::hark_msgs::HarkWaveVal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] wavedata\n\
";
  }

  static const char* value(const ::hark_msgs::HarkWaveVal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wavedata);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HarkWaveVal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkWaveVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hark_msgs::HarkWaveVal_<ContainerAllocator>& v)
  {
    s << indent << "wavedata[]" << std::endl;
    for (size_t i = 0; i < v.wavedata.size(); ++i)
    {
      s << indent << "  wavedata[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.wavedata[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKWAVEVAL_H
