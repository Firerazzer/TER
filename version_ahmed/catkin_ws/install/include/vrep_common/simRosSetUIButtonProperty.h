// Generated by gencpp from file vrep_common/simRosSetUIButtonProperty.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONPROPERTY_H
#define VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONPROPERTY_H

#include <ros/service_traits.h>


#include <vrep_common/simRosSetUIButtonPropertyRequest.h>
#include <vrep_common/simRosSetUIButtonPropertyResponse.h>


namespace vrep_common
{

struct simRosSetUIButtonProperty
{

typedef simRosSetUIButtonPropertyRequest Request;
typedef simRosSetUIButtonPropertyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosSetUIButtonProperty
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosSetUIButtonProperty > {
  static const char* value()
  {
    return "312d7f2f54e5998963314dbff36626e3";
  }

  static const char* value(const ::vrep_common::simRosSetUIButtonProperty&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosSetUIButtonProperty > {
  static const char* value()
  {
    return "vrep_common/simRosSetUIButtonProperty";
  }

  static const char* value(const ::vrep_common::simRosSetUIButtonProperty&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonPropertyRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonProperty > 
template<>
struct MD5Sum< ::vrep_common::simRosSetUIButtonPropertyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetUIButtonProperty >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonPropertyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetUIButtonPropertyRequest> should match 
// service_traits::DataType< ::vrep_common::simRosSetUIButtonProperty > 
template<>
struct DataType< ::vrep_common::simRosSetUIButtonPropertyRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetUIButtonProperty >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonPropertyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonPropertyResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetUIButtonProperty > 
template<>
struct MD5Sum< ::vrep_common::simRosSetUIButtonPropertyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetUIButtonProperty >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonPropertyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetUIButtonPropertyResponse> should match 
// service_traits::DataType< ::vrep_common::simRosSetUIButtonProperty > 
template<>
struct DataType< ::vrep_common::simRosSetUIButtonPropertyResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetUIButtonProperty >::value();
  }
  static const char* value(const ::vrep_common::simRosSetUIButtonPropertyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONPROPERTY_H
