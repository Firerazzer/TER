// Generated by gencpp from file vrep_common/simRosGetBooleanParameterResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETBOOLEANPARAMETERRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETBOOLEANPARAMETERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosGetBooleanParameterResponse_
{
  typedef simRosGetBooleanParameterResponse_<ContainerAllocator> Type;

  simRosGetBooleanParameterResponse_()
    : parameterValue(0)  {
    }
  simRosGetBooleanParameterResponse_(const ContainerAllocator& _alloc)
    : parameterValue(0)  {
    }



   typedef int32_t _parameterValue_type;
  _parameterValue_type parameterValue;




  typedef boost::shared_ptr< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetBooleanParameterResponse_

typedef ::vrep_common::simRosGetBooleanParameterResponse_<std::allocator<void> > simRosGetBooleanParameterResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetBooleanParameterResponse > simRosGetBooleanParameterResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetBooleanParameterResponse const> simRosGetBooleanParameterResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/jade/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/etudiant/M1_ISTR/Ligne_transitique_MONTRAC/ros_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "27eb22d33b5c07abc8d72f26edb19395";
  }

  static const char* value(const ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x27eb22d33b5c07abULL;
  static const uint64_t static_value2 = 0xc8d72f26edb19395ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetBooleanParameterResponse";
  }

  static const char* value(const ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 parameterValue\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.parameterValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetBooleanParameterResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetBooleanParameterResponse_<ContainerAllocator>& v)
  {
    s << indent << "parameterValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameterValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETBOOLEANPARAMETERRESPONSE_H
