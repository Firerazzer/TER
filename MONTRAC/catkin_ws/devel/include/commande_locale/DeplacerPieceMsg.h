// Generated by gencpp from file commande_locale/DeplacerPieceMsg.msg
// DO NOT EDIT!


#ifndef COMMANDE_LOCALE_MESSAGE_DEPLACERPIECEMSG_H
#define COMMANDE_LOCALE_MESSAGE_DEPLACERPIECEMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace commande_locale
{
template <class ContainerAllocator>
struct DeplacerPieceMsg_
{
  typedef DeplacerPieceMsg_<ContainerAllocator> Type;

  DeplacerPieceMsg_()
    : num_robot(0)
    , positionA(0)
    , positionB(0)  {
    }
  DeplacerPieceMsg_(const ContainerAllocator& _alloc)
    : num_robot(0)
    , positionA(0)
    , positionB(0)  {
  (void)_alloc;
    }



   typedef int32_t _num_robot_type;
  _num_robot_type num_robot;

   typedef int32_t _positionA_type;
  _positionA_type positionA;

   typedef int32_t _positionB_type;
  _positionB_type positionB;





  typedef boost::shared_ptr< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> const> ConstPtr;

}; // struct DeplacerPieceMsg_

typedef ::commande_locale::DeplacerPieceMsg_<std::allocator<void> > DeplacerPieceMsg;

typedef boost::shared_ptr< ::commande_locale::DeplacerPieceMsg > DeplacerPieceMsgPtr;
typedef boost::shared_ptr< ::commande_locale::DeplacerPieceMsg const> DeplacerPieceMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace commande_locale

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'commande_locale': ['/home/firerazzer/Documents/TER/MONTRAC/catkin_ws/src/commande_locale/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3590f7e74b621fec7039b4d9aecf39ba";
  }

  static const char* value(const ::commande_locale::DeplacerPieceMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3590f7e74b621fecULL;
  static const uint64_t static_value2 = 0x7039b4d9aecf39baULL;
};

template<class ContainerAllocator>
struct DataType< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "commande_locale/DeplacerPieceMsg";
  }

  static const char* value(const ::commande_locale::DeplacerPieceMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 num_robot\n\
int32 positionA\n\
int32 positionB\n\
";
  }

  static const char* value(const ::commande_locale::DeplacerPieceMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num_robot);
      stream.next(m.positionA);
      stream.next(m.positionB);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeplacerPieceMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::commande_locale::DeplacerPieceMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::commande_locale::DeplacerPieceMsg_<ContainerAllocator>& v)
  {
    s << indent << "num_robot: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_robot);
    s << indent << "positionA: ";
    Printer<int32_t>::stream(s, indent + "  ", v.positionA);
    s << indent << "positionB: ";
    Printer<int32_t>::stream(s, indent + "  ", v.positionB);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMANDE_LOCALE_MESSAGE_DEPLACERPIECEMSG_H