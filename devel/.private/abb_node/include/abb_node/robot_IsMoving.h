// Generated by gencpp from file abb_node/robot_IsMoving.msg
// DO NOT EDIT!


#ifndef ABB_NODE_MESSAGE_ROBOT_ISMOVING_H
#define ABB_NODE_MESSAGE_ROBOT_ISMOVING_H

#include <ros/service_traits.h>


#include <abb_node/robot_IsMovingRequest.h>
#include <abb_node/robot_IsMovingResponse.h>


namespace abb_node
{

struct robot_IsMoving
{

typedef robot_IsMovingRequest Request;
typedef robot_IsMovingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct robot_IsMoving
} // namespace abb_node


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_node::robot_IsMoving > {
  static const char* value()
  {
    return "6a8e4a0e30cc934246f28f5db62a1332";
  }

  static const char* value(const ::abb_node::robot_IsMoving&) { return value(); }
};

template<>
struct DataType< ::abb_node::robot_IsMoving > {
  static const char* value()
  {
    return "abb_node/robot_IsMoving";
  }

  static const char* value(const ::abb_node::robot_IsMoving&) { return value(); }
};


// service_traits::MD5Sum< ::abb_node::robot_IsMovingRequest> should match
// service_traits::MD5Sum< ::abb_node::robot_IsMoving >
template<>
struct MD5Sum< ::abb_node::robot_IsMovingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_node::robot_IsMoving >::value();
  }
  static const char* value(const ::abb_node::robot_IsMovingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_node::robot_IsMovingRequest> should match
// service_traits::DataType< ::abb_node::robot_IsMoving >
template<>
struct DataType< ::abb_node::robot_IsMovingRequest>
{
  static const char* value()
  {
    return DataType< ::abb_node::robot_IsMoving >::value();
  }
  static const char* value(const ::abb_node::robot_IsMovingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_node::robot_IsMovingResponse> should match
// service_traits::MD5Sum< ::abb_node::robot_IsMoving >
template<>
struct MD5Sum< ::abb_node::robot_IsMovingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_node::robot_IsMoving >::value();
  }
  static const char* value(const ::abb_node::robot_IsMovingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_node::robot_IsMovingResponse> should match
// service_traits::DataType< ::abb_node::robot_IsMoving >
template<>
struct DataType< ::abb_node::robot_IsMovingResponse>
{
  static const char* value()
  {
    return DataType< ::abb_node::robot_IsMoving >::value();
  }
  static const char* value(const ::abb_node::robot_IsMovingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_NODE_MESSAGE_ROBOT_ISMOVING_H