// Generated by gencpp from file commande/Capteurs.msg
// DO NOT EDIT!


#ifndef COMMANDE_MESSAGE_CAPTEURS_H
#define COMMANDE_MESSAGE_CAPTEURS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace commande
{
template <class ContainerAllocator>
struct Capteurs_
{
  typedef Capteurs_<ContainerAllocator> Type;

  Capteurs_()
    : capteurs(0)  {
    }
  Capteurs_(const ContainerAllocator& _alloc)
    : capteurs(0)  {
    }



   typedef int64_t _capteurs_type;
  _capteurs_type capteurs;




  typedef boost::shared_ptr< ::commande::Capteurs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::commande::Capteurs_<ContainerAllocator> const> ConstPtr;

}; // struct Capteurs_

typedef ::commande::Capteurs_<std::allocator<void> > Capteurs;

typedef boost::shared_ptr< ::commande::Capteurs > CapteursPtr;
typedef boost::shared_ptr< ::commande::Capteurs const> CapteursConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::commande::Capteurs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::commande::Capteurs_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace commande

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'commande': ['/home/etudiant/M1_ISTR/Ligne_transitique_MONTRAC/ros_ws/src/commande/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::commande::Capteurs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::commande::Capteurs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande::Capteurs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande::Capteurs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande::Capteurs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande::Capteurs_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::commande::Capteurs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf794154bbba9db270fca7e0cc669d41";
  }

  static const char* value(const ::commande::Capteurs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf794154bbba9db2ULL;
  static const uint64_t static_value2 = 0x70fca7e0cc669d41ULL;
};

template<class ContainerAllocator>
struct DataType< ::commande::Capteurs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "commande/Capteurs";
  }

  static const char* value(const ::commande::Capteurs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::commande::Capteurs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 capteurs\n\
\n\
";
  }

  static const char* value(const ::commande::Capteurs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::commande::Capteurs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.capteurs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Capteurs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::commande::Capteurs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::commande::Capteurs_<ContainerAllocator>& v)
  {
    s << indent << "capteurs: ";
    Printer<int64_t>::stream(s, indent + "  ", v.capteurs);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMANDE_MESSAGE_CAPTEURS_H
