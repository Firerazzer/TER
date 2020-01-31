// Generated by gencpp from file vrep_common/simRosEnableSubscriber.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSENABLESUBSCRIBER_H
#define VREP_COMMON_MESSAGE_SIMROSENABLESUBSCRIBER_H

#include <ros/service_traits.h>


#include <vrep_common/simRosEnableSubscriberRequest.h>
#include <vrep_common/simRosEnableSubscriberResponse.h>


namespace vrep_common
{

struct simRosEnableSubscriber
{

typedef simRosEnableSubscriberRequest Request;
typedef simRosEnableSubscriberResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosEnableSubscriber
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosEnableSubscriber > {
  static const char* value()
  {
    return "61a23a6c623cfe11fb9eae842a1893b7";
  }

  static const char* value(const ::vrep_common::simRosEnableSubscriber&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosEnableSubscriber > {
  static const char* value()
  {
    return "vrep_common/simRosEnableSubscriber";
  }

  static const char* value(const ::vrep_common::simRosEnableSubscriber&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosEnableSubscriberRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosEnableSubscriber > 
template<>
struct MD5Sum< ::vrep_common::simRosEnableSubscriberRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosEnableSubscriber >::value();
  }
  static const char* value(const ::vrep_common::simRosEnableSubscriberRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosEnableSubscriberRequest> should match 
// service_traits::DataType< ::vrep_common::simRosEnableSubscriber > 
template<>
struct DataType< ::vrep_common::simRosEnableSubscriberRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosEnableSubscriber >::value();
  }
  static const char* value(const ::vrep_common::simRosEnableSubscriberRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosEnableSubscriberResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosEnableSubscriber > 
template<>
struct MD5Sum< ::vrep_common::simRosEnableSubscriberResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosEnableSubscriber >::value();
  }
  static const char* value(const ::vrep_common::simRosEnableSubscriberResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosEnableSubscriberResponse> should match 
// service_traits::DataType< ::vrep_common::simRosEnableSubscriber > 
template<>
struct DataType< ::vrep_common::simRosEnableSubscriberResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosEnableSubscriber >::value();
  }
  static const char* value(const ::vrep_common::simRosEnableSubscriberResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSENABLESUBSCRIBER_H
