// Generated by gencpp from file aiguillages/Msg_SensorState.msg
// DO NOT EDIT!


#ifndef AIGUILLAGES_MESSAGE_MSG_SENSORSTATE_H
#define AIGUILLAGES_MESSAGE_MSG_SENSORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace aiguillages
{
template <class ContainerAllocator>
struct Msg_SensorState_
{
  typedef Msg_SensorState_<ContainerAllocator> Type;

  Msg_SensorState_()
    : header()
    , CPI()
    , CP()
    , PS()
    , DG()
    , DD()  {
      CPI.assign(false);

      CP.assign(false);

      PS.assign(false);

      DG.assign(false);

      DD.assign(false);
  }
  Msg_SensorState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , CPI()
    , CP()
    , PS()
    , DG()
    , DD()  {
  (void)_alloc;
      CPI.assign(false);

      CP.assign(false);

      PS.assign(false);

      DG.assign(false);

      DD.assign(false);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef boost::array<uint8_t, 9>  _CPI_type;
  _CPI_type CPI;

   typedef boost::array<uint8_t, 11>  _CP_type;
  _CP_type CP;

   typedef boost::array<uint8_t, 25>  _PS_type;
  _PS_type PS;

   typedef boost::array<uint8_t, 13>  _DG_type;
  _DG_type DG;

   typedef boost::array<uint8_t, 13>  _DD_type;
  _DD_type DD;





  typedef boost::shared_ptr< ::aiguillages::Msg_SensorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aiguillages::Msg_SensorState_<ContainerAllocator> const> ConstPtr;

}; // struct Msg_SensorState_

typedef ::aiguillages::Msg_SensorState_<std::allocator<void> > Msg_SensorState;

typedef boost::shared_ptr< ::aiguillages::Msg_SensorState > Msg_SensorStatePtr;
typedef boost::shared_ptr< ::aiguillages::Msg_SensorState const> Msg_SensorStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aiguillages::Msg_SensorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aiguillages::Msg_SensorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aiguillages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'aiguillages': ['/home/firerazzer/Documents/TER/MONTRAC/catkin_ws/src/aiguillages/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aiguillages::Msg_SensorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aiguillages::Msg_SensorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aiguillages::Msg_SensorState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e5483b92cc5dad298967591bceb2081";
  }

  static const char* value(const ::aiguillages::Msg_SensorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e5483b92cc5dad2ULL;
  static const uint64_t static_value2 = 0x98967591bceb2081ULL;
};

template<class ContainerAllocator>
struct DataType< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aiguillages/Msg_SensorState";
  }

  static const char* value(const ::aiguillages::Msg_SensorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
bool[9] CPI\n\
bool[11] CP\n\
bool[25] PS\n\
bool[13] DG\n\
bool[13] DD\n\
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
";
  }

  static const char* value(const ::aiguillages::Msg_SensorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.CPI);
      stream.next(m.CP);
      stream.next(m.PS);
      stream.next(m.DG);
      stream.next(m.DD);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Msg_SensorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aiguillages::Msg_SensorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aiguillages::Msg_SensorState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "CPI[]" << std::endl;
    for (size_t i = 0; i < v.CPI.size(); ++i)
    {
      s << indent << "  CPI[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.CPI[i]);
    }
    s << indent << "CP[]" << std::endl;
    for (size_t i = 0; i < v.CP.size(); ++i)
    {
      s << indent << "  CP[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.CP[i]);
    }
    s << indent << "PS[]" << std::endl;
    for (size_t i = 0; i < v.PS.size(); ++i)
    {
      s << indent << "  PS[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.PS[i]);
    }
    s << indent << "DG[]" << std::endl;
    for (size_t i = 0; i < v.DG.size(); ++i)
    {
      s << indent << "  DG[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.DG[i]);
    }
    s << indent << "DD[]" << std::endl;
    for (size_t i = 0; i < v.DD.size(); ++i)
    {
      s << indent << "  DD[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.DD[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIGUILLAGES_MESSAGE_MSG_SENSORSTATE_H
