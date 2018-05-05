// Generated by gencpp from file hark_msgs/HarkSrcFFTVal.msg
// DO NOT EDIT!


#ifndef HARK_MSGS_MESSAGE_HARKSRCFFTVAL_H
#define HARK_MSGS_MESSAGE_HARKSRCFFTVAL_H


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
struct HarkSrcFFTVal_
{
  typedef HarkSrcFFTVal_<ContainerAllocator> Type;

  HarkSrcFFTVal_()
    : id(0)
    , power(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , azimuth(0.0)
    , elevation(0.0)
    , length(0)
    , fftdata_real()
    , fftdata_imag()  {
    }
  HarkSrcFFTVal_(const ContainerAllocator& _alloc)
    : id(0)
    , power(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , azimuth(0.0)
    , elevation(0.0)
    , length(0)
    , fftdata_real(_alloc)
    , fftdata_imag(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef float _power_type;
  _power_type power;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _azimuth_type;
  _azimuth_type azimuth;

   typedef float _elevation_type;
  _elevation_type elevation;

   typedef int32_t _length_type;
  _length_type length;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fftdata_real_type;
  _fftdata_real_type fftdata_real;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fftdata_imag_type;
  _fftdata_imag_type fftdata_imag;




  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> const> ConstPtr;

}; // struct HarkSrcFFTVal_

typedef ::hark_msgs::HarkSrcFFTVal_<std::allocator<void> > HarkSrcFFTVal;

typedef boost::shared_ptr< ::hark_msgs::HarkSrcFFTVal > HarkSrcFFTValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkSrcFFTVal const> HarkSrcFFTValConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94acf8949ad4989403dee204649029bc";
  }

  static const char* value(const ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94acf8949ad49894ULL;
  static const uint64_t static_value2 = 0x03dee204649029bcULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hark_msgs/HarkSrcFFTVal";
  }

  static const char* value(const ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n\
float32 power\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 azimuth\n\
float32 elevation\n\
int32 length\n\
float32[] fftdata_real\n\
float32[] fftdata_imag\n\
";
  }

  static const char* value(const ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.power);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.azimuth);
      stream.next(m.elevation);
      stream.next(m.length);
      stream.next(m.fftdata_real);
      stream.next(m.fftdata_imag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HarkSrcFFTVal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hark_msgs::HarkSrcFFTVal_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "power: ";
    Printer<float>::stream(s, indent + "  ", v.power);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "azimuth: ";
    Printer<float>::stream(s, indent + "  ", v.azimuth);
    s << indent << "elevation: ";
    Printer<float>::stream(s, indent + "  ", v.elevation);
    s << indent << "length: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length);
    s << indent << "fftdata_real[]" << std::endl;
    for (size_t i = 0; i < v.fftdata_real.size(); ++i)
    {
      s << indent << "  fftdata_real[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fftdata_real[i]);
    }
    s << indent << "fftdata_imag[]" << std::endl;
    for (size_t i = 0; i < v.fftdata_imag.size(); ++i)
    {
      s << indent << "  fftdata_imag[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fftdata_imag[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKSRCFFTVAL_H
