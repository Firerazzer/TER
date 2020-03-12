// Generated by gencpp from file plc_in/inputsRequest.msg
// DO NOT EDIT!


#ifndef PLC_IN_MESSAGE_INPUTSREQUEST_H
#define PLC_IN_MESSAGE_INPUTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace plc_in
{
template <class ContainerAllocator>
struct inputsRequest_
{
  typedef inputsRequest_<ContainerAllocator> Type;

  inputsRequest_()
    : data_in_module(0)
    , data_in_position(0)
    , data_in_value(false)  {
    }
  inputsRequest_(const ContainerAllocator& _alloc)
    : data_in_module(0)
    , data_in_position(0)
    , data_in_value(false)  {
  (void)_alloc;
    }



   typedef int8_t _data_in_module_type;
  _data_in_module_type data_in_module;

   typedef int16_t _data_in_position_type;
  _data_in_position_type data_in_position;

   typedef uint8_t _data_in_value_type;
  _data_in_value_type data_in_value;





  typedef boost::shared_ptr< ::plc_in::inputsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plc_in::inputsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct inputsRequest_

typedef ::plc_in::inputsRequest_<std::allocator<void> > inputsRequest;

typedef boost::shared_ptr< ::plc_in::inputsRequest > inputsRequestPtr;
typedef boost::shared_ptr< ::plc_in::inputsRequest const> inputsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plc_in::inputsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plc_in::inputsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace plc_in

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::plc_in::inputsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plc_in::inputsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plc_in::inputsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plc_in::inputsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plc_in::inputsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plc_in::inputsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plc_in::inputsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e9b47e75f04e0263368b339eff5b1ef4";
  }

  static const char* value(const ::plc_in::inputsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe9b47e75f04e0263ULL;
  static const uint64_t static_value2 = 0x368b339eff5b1ef4ULL;
};

template<class ContainerAllocator>
struct DataType< ::plc_in::inputsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plc_in/inputsRequest";
  }

  static const char* value(const ::plc_in::inputsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plc_in::inputsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 data_in_module\n\
int16 data_in_position\n\
bool data_in_value\n\
";
  }

  static const char* value(const ::plc_in::inputsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plc_in::inputsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data_in_module);
      stream.next(m.data_in_position);
      stream.next(m.data_in_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct inputsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plc_in::inputsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plc_in::inputsRequest_<ContainerAllocator>& v)
  {
    s << indent << "data_in_module: ";
    Printer<int8_t>::stream(s, indent + "  ", v.data_in_module);
    s << indent << "data_in_position: ";
    Printer<int16_t>::stream(s, indent + "  ", v.data_in_position);
    s << indent << "data_in_value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data_in_value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLC_IN_MESSAGE_INPUTSREQUEST_H
