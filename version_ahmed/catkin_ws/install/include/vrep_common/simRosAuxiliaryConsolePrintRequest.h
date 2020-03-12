// Generated by gencpp from file vrep_common/simRosAuxiliaryConsolePrintRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLEPRINTREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLEPRINTREQUEST_H


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
struct simRosAuxiliaryConsolePrintRequest_
{
  typedef simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> Type;

  simRosAuxiliaryConsolePrintRequest_()
    : consoleHandle(0)
    , text()  {
    }
  simRosAuxiliaryConsolePrintRequest_(const ContainerAllocator& _alloc)
    : consoleHandle(0)
    , text(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _consoleHandle_type;
  _consoleHandle_type consoleHandle;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;





  typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosAuxiliaryConsolePrintRequest_

typedef ::vrep_common::simRosAuxiliaryConsolePrintRequest_<std::allocator<void> > simRosAuxiliaryConsolePrintRequest;

typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsolePrintRequest > simRosAuxiliaryConsolePrintRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsolePrintRequest const> simRosAuxiliaryConsolePrintRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01b8405a29eed17e1ac8fe2b1db7c0a0";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01b8405a29eed17eULL;
  static const uint64_t static_value2 = 0x1ac8fe2b1db7c0a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosAuxiliaryConsolePrintRequest";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 consoleHandle\n\
string text\n\
";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.consoleHandle);
      stream.next(m.text);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosAuxiliaryConsolePrintRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosAuxiliaryConsolePrintRequest_<ContainerAllocator>& v)
  {
    s << indent << "consoleHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.consoleHandle);
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLEPRINTREQUEST_H
