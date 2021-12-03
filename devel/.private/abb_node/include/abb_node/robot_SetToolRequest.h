// Generated by gencpp from file abb_node/robot_SetToolRequest.msg
// DO NOT EDIT!


#ifndef ABB_NODE_MESSAGE_ROBOT_SETTOOLREQUEST_H
#define ABB_NODE_MESSAGE_ROBOT_SETTOOLREQUEST_H


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
struct robot_SetToolRequest_
{
  typedef robot_SetToolRequest_<ContainerAllocator> Type;

  robot_SetToolRequest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , q0(0.0)
    , qx(0.0)
    , qy(0.0)
    , qz(0.0)  {
    }
  robot_SetToolRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , q0(0.0)
    , qx(0.0)
    , qy(0.0)
    , qz(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _q0_type;
  _q0_type q0;

   typedef double _qx_type;
  _qx_type qx;

   typedef double _qy_type;
  _qy_type qy;

   typedef double _qz_type;
  _qz_type qz;





  typedef boost::shared_ptr< ::abb_node::robot_SetToolRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_node::robot_SetToolRequest_<ContainerAllocator> const> ConstPtr;

}; // struct robot_SetToolRequest_

typedef ::abb_node::robot_SetToolRequest_<std::allocator<void> > robot_SetToolRequest;

typedef boost::shared_ptr< ::abb_node::robot_SetToolRequest > robot_SetToolRequestPtr;
typedef boost::shared_ptr< ::abb_node::robot_SetToolRequest const> robot_SetToolRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_node::robot_SetToolRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_node::robot_SetToolRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SetToolRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.q0 == rhs.q0 &&
    lhs.qx == rhs.qx &&
    lhs.qy == rhs.qy &&
    lhs.qz == rhs.qz;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_node::robot_SetToolRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SetToolRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SetToolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SetToolRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SetToolRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "256392fa17e6514709500a65ddaf30e9";
  }

  static const char* value(const ::abb_node::robot_SetToolRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x256392fa17e65147ULL;
  static const uint64_t static_value2 = 0x09500a65ddaf30e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_node/robot_SetToolRequest";
  }

  static const char* value(const ::abb_node::robot_SetToolRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Service to Set the Tool of the robot in cartesian coordinates\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 q0\n"
"float64 qx\n"
"float64 qy\n"
"float64 qz\n"
;
  }

  static const char* value(const ::abb_node::robot_SetToolRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.q0);
      stream.next(m.qx);
      stream.next(m.qy);
      stream.next(m.qz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_SetToolRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_node::robot_SetToolRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_node::robot_SetToolRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "q0: ";
    Printer<double>::stream(s, indent + "  ", v.q0);
    s << indent << "qx: ";
    Printer<double>::stream(s, indent + "  ", v.qx);
    s << indent << "qy: ";
    Printer<double>::stream(s, indent + "  ", v.qy);
    s << indent << "qz: ";
    Printer<double>::stream(s, indent + "  ", v.qz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_NODE_MESSAGE_ROBOT_SETTOOLREQUEST_H