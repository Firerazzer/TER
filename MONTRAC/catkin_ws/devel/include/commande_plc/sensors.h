// Generated by gencpp from file commande_plc/sensors.msg
// DO NOT EDIT!


#ifndef COMMANDE_PLC_MESSAGE_SENSORS_H
#define COMMANDE_PLC_MESSAGE_SENSORS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace commande_plc
{
template <class ContainerAllocator>
struct sensors_
{
  typedef sensors_<ContainerAllocator> Type;

  sensors_()
    : sensors_data0(0)
    , sensors_data1(0)
    , sensors_data2(0)
    , PS2()
    , PS3()
    , PS5()
    , PS4()
    , D1D()
    , D1G()
    , CP1()
    , CPI1()
    , CPI2()
    , D2D()
    , D2G()
    , CP2()
    , PS6()
    , PS20()
    , PS21()
    , PS22()
    , PS24()
    , PS23()
    , D11D()
    , D11G()
    , CP9()
    , CPI7()
    , CPI8()
    , D12D()
    , D12G()
    , CP10()
    , PS1()  {
    }
  sensors_(const ContainerAllocator& _alloc)
    : sensors_data0(0)
    , sensors_data1(0)
    , sensors_data2(0)
    , PS2(_alloc)
    , PS3(_alloc)
    , PS5(_alloc)
    , PS4(_alloc)
    , D1D(_alloc)
    , D1G(_alloc)
    , CP1(_alloc)
    , CPI1(_alloc)
    , CPI2(_alloc)
    , D2D(_alloc)
    , D2G(_alloc)
    , CP2(_alloc)
    , PS6(_alloc)
    , PS20(_alloc)
    , PS21(_alloc)
    , PS22(_alloc)
    , PS24(_alloc)
    , PS23(_alloc)
    , D11D(_alloc)
    , D11G(_alloc)
    , CP9(_alloc)
    , CPI7(_alloc)
    , CPI8(_alloc)
    , D12D(_alloc)
    , D12G(_alloc)
    , CP10(_alloc)
    , PS1(_alloc)  {
  (void)_alloc;
    }



   typedef uint16_t _sensors_data0_type;
  _sensors_data0_type sensors_data0;

   typedef uint16_t _sensors_data1_type;
  _sensors_data1_type sensors_data1;

   typedef uint16_t _sensors_data2_type;
  _sensors_data2_type sensors_data2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS2_type;
  _PS2_type PS2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS3_type;
  _PS3_type PS3;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS5_type;
  _PS5_type PS5;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS4_type;
  _PS4_type PS4;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D1D_type;
  _D1D_type D1D;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D1G_type;
  _D1G_type D1G;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CP1_type;
  _CP1_type CP1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CPI1_type;
  _CPI1_type CPI1;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CPI2_type;
  _CPI2_type CPI2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D2D_type;
  _D2D_type D2D;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D2G_type;
  _D2G_type D2G;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CP2_type;
  _CP2_type CP2;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS6_type;
  _PS6_type PS6;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS20_type;
  _PS20_type PS20;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS21_type;
  _PS21_type PS21;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS22_type;
  _PS22_type PS22;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS24_type;
  _PS24_type PS24;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS23_type;
  _PS23_type PS23;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D11D_type;
  _D11D_type D11D;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D11G_type;
  _D11G_type D11G;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CP9_type;
  _CP9_type CP9;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CPI7_type;
  _CPI7_type CPI7;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CPI8_type;
  _CPI8_type CPI8;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D12D_type;
  _D12D_type D12D;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _D12G_type;
  _D12G_type D12G;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _CP10_type;
  _CP10_type CP10;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PS1_type;
  _PS1_type PS1;





  typedef boost::shared_ptr< ::commande_plc::sensors_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::commande_plc::sensors_<ContainerAllocator> const> ConstPtr;

}; // struct sensors_

typedef ::commande_plc::sensors_<std::allocator<void> > sensors;

typedef boost::shared_ptr< ::commande_plc::sensors > sensorsPtr;
typedef boost::shared_ptr< ::commande_plc::sensors const> sensorsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::commande_plc::sensors_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::commande_plc::sensors_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace commande_plc

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'commande_plc': ['/home/firerazzer/Documents/TER/version_ahmed/catkin_ws/src/commande_plc/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::commande_plc::sensors_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::commande_plc::sensors_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande_plc::sensors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande_plc::sensors_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande_plc::sensors_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande_plc::sensors_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::commande_plc::sensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8be092b5bc169fade95a7af8e4fc3bb5";
  }

  static const char* value(const ::commande_plc::sensors_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8be092b5bc169fadULL;
  static const uint64_t static_value2 = 0xe95a7af8e4fc3bb5ULL;
};

template<class ContainerAllocator>
struct DataType< ::commande_plc::sensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "commande_plc/sensors";
  }

  static const char* value(const ::commande_plc::sensors_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::commande_plc::sensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 sensors_data0\n\
uint16 sensors_data1\n\
uint16 sensors_data2\n\
string PS2\n\
string PS3\n\
string PS5\n\
string PS4\n\
string D1D\n\
string D1G\n\
string CP1\n\
string CPI1\n\
string CPI2\n\
string D2D\n\
string D2G\n\
string CP2\n\
string PS6\n\
string PS20\n\
string PS21\n\
string PS22\n\
string PS24\n\
string PS23\n\
string D11D\n\
string D11G\n\
string CP9\n\
string CPI7\n\
string CPI8\n\
string D12D\n\
string D12G\n\
string CP10\n\
string PS1\n\
";
  }

  static const char* value(const ::commande_plc::sensors_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::commande_plc::sensors_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensors_data0);
      stream.next(m.sensors_data1);
      stream.next(m.sensors_data2);
      stream.next(m.PS2);
      stream.next(m.PS3);
      stream.next(m.PS5);
      stream.next(m.PS4);
      stream.next(m.D1D);
      stream.next(m.D1G);
      stream.next(m.CP1);
      stream.next(m.CPI1);
      stream.next(m.CPI2);
      stream.next(m.D2D);
      stream.next(m.D2G);
      stream.next(m.CP2);
      stream.next(m.PS6);
      stream.next(m.PS20);
      stream.next(m.PS21);
      stream.next(m.PS22);
      stream.next(m.PS24);
      stream.next(m.PS23);
      stream.next(m.D11D);
      stream.next(m.D11G);
      stream.next(m.CP9);
      stream.next(m.CPI7);
      stream.next(m.CPI8);
      stream.next(m.D12D);
      stream.next(m.D12G);
      stream.next(m.CP10);
      stream.next(m.PS1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sensors_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::commande_plc::sensors_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::commande_plc::sensors_<ContainerAllocator>& v)
  {
    s << indent << "sensors_data0: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.sensors_data0);
    s << indent << "sensors_data1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.sensors_data1);
    s << indent << "sensors_data2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.sensors_data2);
    s << indent << "PS2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS2);
    s << indent << "PS3: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS3);
    s << indent << "PS5: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS5);
    s << indent << "PS4: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS4);
    s << indent << "D1D: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D1D);
    s << indent << "D1G: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D1G);
    s << indent << "CP1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CP1);
    s << indent << "CPI1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CPI1);
    s << indent << "CPI2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CPI2);
    s << indent << "D2D: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D2D);
    s << indent << "D2G: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D2G);
    s << indent << "CP2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CP2);
    s << indent << "PS6: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS6);
    s << indent << "PS20: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS20);
    s << indent << "PS21: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS21);
    s << indent << "PS22: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS22);
    s << indent << "PS24: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS24);
    s << indent << "PS23: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS23);
    s << indent << "D11D: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D11D);
    s << indent << "D11G: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D11G);
    s << indent << "CP9: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CP9);
    s << indent << "CPI7: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CPI7);
    s << indent << "CPI8: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CPI8);
    s << indent << "D12D: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D12D);
    s << indent << "D12G: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.D12G);
    s << indent << "CP10: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.CP10);
    s << indent << "PS1: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PS1);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMANDE_PLC_MESSAGE_SENSORS_H
