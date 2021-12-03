// Generated by gencpp from file abb_node/robot_SpecialCommandRequest.msg
// DO NOT EDIT!


#ifndef ABB_NODE_MESSAGE_ROBOT_SPECIALCOMMANDREQUEST_H
#define ABB_NODE_MESSAGE_ROBOT_SPECIALCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace abb_node
{
template <class ContainerAllocator>
struct robot_SpecialCommandRequest_
{
  typedef robot_SpecialCommandRequest_<ContainerAllocator> Type;

  robot_SpecialCommandRequest_()
    : command(0)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , param5(0.0)  {
    }
  robot_SpecialCommandRequest_(const ContainerAllocator& _alloc)
    : command(0)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , param5(0.0)  {
  (void)_alloc;
    }



   typedef int64_t _command_type;
  _command_type command;

   typedef double _param1_type;
  _param1_type param1;

   typedef double _param2_type;
  _param2_type param2;

   typedef double _param3_type;
  _param3_type param3;

   typedef double _param4_type;
  _param4_type param4;

   typedef double _param5_type;
  _param5_type param5;





  typedef boost::shared_ptr< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct robot_SpecialCommandRequest_

typedef ::abb_node::robot_SpecialCommandRequest_<std::allocator<void> > robot_SpecialCommandRequest;

typedef boost::shared_ptr< ::abb_node::robot_SpecialCommandRequest > robot_SpecialCommandRequestPtr;
typedef boost::shared_ptr< ::abb_node::robot_SpecialCommandRequest const> robot_SpecialCommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command &&
    lhs.param1 == rhs.param1 &&
    lhs.param2 == rhs.param2 &&
    lhs.param3 == rhs.param3 &&
    lhs.param4 == rhs.param4 &&
    lhs.param5 == rhs.param5;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "35641a14d68eae4e3f43fd2e5282cc04";
  }

  static const char* value(const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x35641a14d68eae4eULL;
  static const uint64_t static_value2 = 0x3f43fd2e5282cc04ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_node/robot_SpecialCommandRequest";
  }

  static const char* value(const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Service to run spcial command\n"
"\n"
"int64 command  #integer identificating the command to run\n"
"float64 param1 #Special purpose parameter number 1\n"
"float64 param2 #Special purpose parameter number 2\n"
"float64 param3 #Special purpose parameter number 3\n"
"float64 param4 #Special purpose parameter number 4\n"
"float64 param5 #Special purpose parameter number 5\n"
;
  }

  static const char* value(const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.param1);
      stream.next(m.param2);
      stream.next(m.param3);
      stream.next(m.param4);
      stream.next(m.param5);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_SpecialCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_node::robot_SpecialCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<int64_t>::stream(s, indent + "  ", v.command);
    s << indent << "param1: ";
    Printer<double>::stream(s, indent + "  ", v.param1);
    s << indent << "param2: ";
    Printer<double>::stream(s, indent + "  ", v.param2);
    s << indent << "param3: ";
    Printer<double>::stream(s, indent + "  ", v.param3);
    s << indent << "param4: ";
    Printer<double>::stream(s, indent + "  ", v.param4);
    s << indent << "param5: ";
    Printer<double>::stream(s, indent + "  ", v.param5);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_NODE_MESSAGE_ROBOT_SPECIALCOMMANDREQUEST_H