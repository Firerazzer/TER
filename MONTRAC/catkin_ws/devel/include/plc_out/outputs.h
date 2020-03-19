// Generated by gencpp from file plc_out/outputs.msg
// DO NOT EDIT!


#ifndef PLC_OUT_MESSAGE_OUTPUTS_H
#define PLC_OUT_MESSAGE_OUTPUTS_H

#include <ros/service_traits.h>


#include <plc_out/outputsRequest.h>
#include <plc_out/outputsResponse.h>


namespace plc_out
{

struct outputs
{

typedef outputsRequest Request;
typedef outputsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct outputs
} // namespace plc_out


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::plc_out::outputs > {
  static const char* value()
  {
    return "97aea7623ae837c55d5e85ee1aae84af";
  }

  static const char* value(const ::plc_out::outputs&) { return value(); }
};

template<>
struct DataType< ::plc_out::outputs > {
  static const char* value()
  {
    return "plc_out/outputs";
  }

  static const char* value(const ::plc_out::outputs&) { return value(); }
};


// service_traits::MD5Sum< ::plc_out::outputsRequest> should match 
// service_traits::MD5Sum< ::plc_out::outputs > 
template<>
struct MD5Sum< ::plc_out::outputsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::plc_out::outputs >::value();
  }
  static const char* value(const ::plc_out::outputsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::plc_out::outputsRequest> should match 
// service_traits::DataType< ::plc_out::outputs > 
template<>
struct DataType< ::plc_out::outputsRequest>
{
  static const char* value()
  {
    return DataType< ::plc_out::outputs >::value();
  }
  static const char* value(const ::plc_out::outputsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::plc_out::outputsResponse> should match 
// service_traits::MD5Sum< ::plc_out::outputs > 
template<>
struct MD5Sum< ::plc_out::outputsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::plc_out::outputs >::value();
  }
  static const char* value(const ::plc_out::outputsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::plc_out::outputsResponse> should match 
// service_traits::DataType< ::plc_out::outputs > 
template<>
struct DataType< ::plc_out::outputsResponse>
{
  static const char* value()
  {
    return DataType< ::plc_out::outputs >::value();
  }
  static const char* value(const ::plc_out::outputsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLC_OUT_MESSAGE_OUTPUTS_H
