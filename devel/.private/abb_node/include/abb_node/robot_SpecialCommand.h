// Generated by gencpp from file abb_node/robot_SpecialCommand.msg
// DO NOT EDIT!


#ifndef ABB_NODE_MESSAGE_ROBOT_SPECIALCOMMAND_H
#define ABB_NODE_MESSAGE_ROBOT_SPECIALCOMMAND_H

#include <ros/service_traits.h>


#include <abb_node/robot_SpecialCommandRequest.h>
#include <abb_node/robot_SpecialCommandResponse.h>


namespace abb_node
{

struct robot_SpecialCommand
{

typedef robot_SpecialCommandRequest Request;
typedef robot_SpecialCommandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct robot_SpecialCommand
} // namespace abb_node


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_node::robot_SpecialCommand > {
  static const char* value()
  {
    return "dd470c01f667d001d212037b2fe2c918";
  }

  static const char* value(const ::abb_node::robot_SpecialCommand&) { return value(); }
};

template<>
struct DataType< ::abb_node::robot_SpecialCommand > {
  static const char* value()
  {
    return "abb_node/robot_SpecialCommand";
  }

  static const char* value(const ::abb_node::robot_SpecialCommand&) { return value(); }
};


// service_traits::MD5Sum< ::abb_node::robot_SpecialCommandRequest> should match
// service_traits::MD5Sum< ::abb_node::robot_SpecialCommand >
template<>
struct MD5Sum< ::abb_node::robot_SpecialCommandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_node::robot_SpecialCommand >::value();
  }
  static const char* value(const ::abb_node::robot_SpecialCommandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_node::robot_SpecialCommandRequest> should match
// service_traits::DataType< ::abb_node::robot_SpecialCommand >
template<>
struct DataType< ::abb_node::robot_SpecialCommandRequest>
{
  static const char* value()
  {
    return DataType< ::abb_node::robot_SpecialCommand >::value();
  }
  static const char* value(const ::abb_node::robot_SpecialCommandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_node::robot_SpecialCommandResponse> should match
// service_traits::MD5Sum< ::abb_node::robot_SpecialCommand >
template<>
struct MD5Sum< ::abb_node::robot_SpecialCommandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_node::robot_SpecialCommand >::value();
  }
  static const char* value(const ::abb_node::robot_SpecialCommandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_node::robot_SpecialCommandResponse> should match
// service_traits::DataType< ::abb_node::robot_SpecialCommand >
template<>
struct DataType< ::abb_node::robot_SpecialCommandResponse>
{
  static const char* value()
  {
    return DataType< ::abb_node::robot_SpecialCommand >::value();
  }
  static const char* value(const ::abb_node::robot_SpecialCommandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_NODE_MESSAGE_ROBOT_SPECIALCOMMAND_H
