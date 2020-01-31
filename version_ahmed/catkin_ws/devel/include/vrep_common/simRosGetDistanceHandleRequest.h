// Generated by gencpp from file vrep_common/simRosGetDistanceHandleRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETDISTANCEHANDLEREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSGETDISTANCEHANDLEREQUEST_H


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
struct simRosGetDistanceHandleRequest_
{
  typedef simRosGetDistanceHandleRequest_<ContainerAllocator> Type;

  simRosGetDistanceHandleRequest_()
    : distanceName()  {
    }
  simRosGetDistanceHandleRequest_(const ContainerAllocator& _alloc)
    : distanceName(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _distanceName_type;
  _distanceName_type distanceName;




  typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetDistanceHandleRequest_

typedef ::vrep_common::simRosGetDistanceHandleRequest_<std::allocator<void> > simRosGetDistanceHandleRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest > simRosGetDistanceHandleRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetDistanceHandleRequest const> simRosGetDistanceHandleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/projn7cellule/CelluleFlexible/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "218566481395d1ececa0c02cd69f99ad";
  }

  static const char* value(const ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x218566481395d1ecULL;
  static const uint64_t static_value2 = 0xeca0c02cd69f99adULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetDistanceHandleRequest";
  }

  static const char* value(const ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string distanceName\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distanceName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetDistanceHandleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetDistanceHandleRequest_<ContainerAllocator>& v)
  {
    s << indent << "distanceName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.distanceName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETDISTANCEHANDLEREQUEST_H
