// Generated by gencpp from file vrep_common/ForceSensorData.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_FORCESENSORDATA_H
#define VREP_COMMON_MESSAGE_FORCESENSORDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Int32.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace vrep_common
{
template <class ContainerAllocator>
struct ForceSensorData_
{
  typedef ForceSensorData_<ContainerAllocator> Type;

  ForceSensorData_()
    : sensorState()
    , force()
    , torque()  {
    }
  ForceSensorData_(const ContainerAllocator& _alloc)
    : sensorState(_alloc)
    , force(_alloc)
    , torque(_alloc)  {
    }



   typedef  ::std_msgs::Int32_<ContainerAllocator>  _sensorState_type;
  _sensorState_type sensorState;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_type;
  _force_type force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _torque_type;
  _torque_type torque;




  typedef boost::shared_ptr< ::vrep_common::ForceSensorData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::ForceSensorData_<ContainerAllocator> const> ConstPtr;

}; // struct ForceSensorData_

typedef ::vrep_common::ForceSensorData_<std::allocator<void> > ForceSensorData;

typedef boost::shared_ptr< ::vrep_common::ForceSensorData > ForceSensorDataPtr;
typedef boost::shared_ptr< ::vrep_common::ForceSensorData const> ForceSensorDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::ForceSensorData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::ForceSensorData_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::ForceSensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::ForceSensorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::ForceSensorData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::ForceSensorData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::ForceSensorData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::ForceSensorData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::ForceSensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "975cc3fe659f11cb0dbd06416cff4a10";
  }

  static const char* value(const ::vrep_common::ForceSensorData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x975cc3fe659f11cbULL;
  static const uint64_t static_value2 = 0x0dbd06416cff4a10ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::ForceSensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/ForceSensorData";
  }

  static const char* value(const ::vrep_common::ForceSensorData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::ForceSensorData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Int32 sensorState\n\
geometry_msgs/Vector3 force\n\
geometry_msgs/Vector3 torque\n\
\n\
================================================================================\n\
MSG: std_msgs/Int32\n\
int32 data\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::vrep_common::ForceSensorData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::ForceSensorData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensorState);
      stream.next(m.force);
      stream.next(m.torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ForceSensorData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::ForceSensorData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::ForceSensorData_<ContainerAllocator>& v)
  {
    s << indent << "sensorState: ";
    s << std::endl;
    Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "  ", v.sensorState);
    s << indent << "force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force);
    s << indent << "torque: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.torque);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_FORCESENSORDATA_H
