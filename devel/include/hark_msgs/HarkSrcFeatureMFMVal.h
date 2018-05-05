// Generated by gencpp from file hark_msgs/HarkSrcFeatureMFMVal.msg
// DO NOT EDIT!


#ifndef HARK_MSGS_MESSAGE_HARKSRCFEATUREMFMVAL_H
#define HARK_MSGS_MESSAGE_HARKSRCFEATUREMFMVAL_H


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
struct HarkSrcFeatureMFMVal_
{
  typedef HarkSrcFeatureMFMVal_<ContainerAllocator> Type;

  HarkSrcFeatureMFMVal_()
    : id(0)
    , power(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , azimuth(0.0)
    , elevation(0.0)
    , length_feature(0)
    , data_bytes_feature(0)
    , featuredata_feature()
    , length_mfm(0)
    , data_bytes_mfm(0)
    , featuredata_mfm()  {
    }
  HarkSrcFeatureMFMVal_(const ContainerAllocator& _alloc)
    : id(0)
    , power(0.0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , azimuth(0.0)
    , elevation(0.0)
    , length_feature(0)
    , data_bytes_feature(0)
    , featuredata_feature(_alloc)
    , length_mfm(0)
    , data_bytes_mfm(0)
    , featuredata_mfm(_alloc)  {
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

   typedef int32_t _length_feature_type;
  _length_feature_type length_feature;

   typedef int32_t _data_bytes_feature_type;
  _data_bytes_feature_type data_bytes_feature;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _featuredata_feature_type;
  _featuredata_feature_type featuredata_feature;

   typedef int32_t _length_mfm_type;
  _length_mfm_type length_mfm;

   typedef int32_t _data_bytes_mfm_type;
  _data_bytes_mfm_type data_bytes_mfm;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _featuredata_mfm_type;
  _featuredata_mfm_type featuredata_mfm;




  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> const> ConstPtr;

}; // struct HarkSrcFeatureMFMVal_

typedef ::hark_msgs::HarkSrcFeatureMFMVal_<std::allocator<void> > HarkSrcFeatureMFMVal;

typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal > HarkSrcFeatureMFMValPtr;
typedef boost::shared_ptr< ::hark_msgs::HarkSrcFeatureMFMVal const> HarkSrcFeatureMFMValConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "127ac60e264e1ad6ade4a918cf7daa0e";
  }

  static const char* value(const ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x127ac60e264e1ad6ULL;
  static const uint64_t static_value2 = 0xade4a918cf7daa0eULL;
};

template<class ContainerAllocator>
struct DataType< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hark_msgs/HarkSrcFeatureMFMVal";
  }

  static const char* value(const ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
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
int32 length_feature\n\
int32 data_bytes_feature\n\
float32[] featuredata_feature\n\
int32 length_mfm\n\
int32 data_bytes_mfm\n\
float32[] featuredata_mfm\n\
";
  }

  static const char* value(const ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
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
      stream.next(m.length_feature);
      stream.next(m.data_bytes_feature);
      stream.next(m.featuredata_feature);
      stream.next(m.length_mfm);
      stream.next(m.data_bytes_mfm);
      stream.next(m.featuredata_mfm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HarkSrcFeatureMFMVal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hark_msgs::HarkSrcFeatureMFMVal_<ContainerAllocator>& v)
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
    s << indent << "length_feature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length_feature);
    s << indent << "data_bytes_feature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data_bytes_feature);
    s << indent << "featuredata_feature[]" << std::endl;
    for (size_t i = 0; i < v.featuredata_feature.size(); ++i)
    {
      s << indent << "  featuredata_feature[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.featuredata_feature[i]);
    }
    s << indent << "length_mfm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length_mfm);
    s << indent << "data_bytes_mfm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data_bytes_mfm);
    s << indent << "featuredata_mfm[]" << std::endl;
    for (size_t i = 0; i < v.featuredata_mfm.size(); ++i)
    {
      s << indent << "  featuredata_mfm[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.featuredata_mfm[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HARK_MSGS_MESSAGE_HARKSRCFEATUREMFMVAL_H
