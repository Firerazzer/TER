// Generated by gencpp from file vrep_common/simRosClearStringSignalRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSCLEARSTRINGSIGNALREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSCLEARSTRINGSIGNALREQUEST_H


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
struct simRosClearStringSignalRequest_
{
  typedef simRosClearStringSignalRequest_<ContainerAllocator> Type;

  simRosClearStringSignalRequest_()
    : signalName()  {
    }
  simRosClearStringSignalRequest_(const ContainerAllocator& _alloc)
    : signalName(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _signalName_type;
  _signalName_type signalName;





  typedef boost::shared_ptr< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosClearStringSignalRequest_

typedef ::vrep_common::simRosClearStringSignalRequest_<std::allocator<void> > simRosClearStringSignalRequest;

typedef boost::shared_ptr< ::vrep_common::simRosClearStringSignalRequest > simRosClearStringSignalRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosClearStringSignalRequest const> simRosClearStringSignalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/florent/Documents/TER/version_ahmed/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "00c43203ad474c6ce746089e83166bba";
  }

  static const char* value(const ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x00c43203ad474c6cULL;
  static const uint64_t static_value2 = 0xe746089e83166bbaULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosClearStringSignalRequest";
  }

  static const char* value(const ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string signalName\n\
";
  }

  static const char* value(const ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.signalName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosClearStringSignalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosClearStringSignalRequest_<ContainerAllocator>& v)
  {
    s << indent << "signalName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.signalName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSCLEARSTRINGSIGNALREQUEST_H
