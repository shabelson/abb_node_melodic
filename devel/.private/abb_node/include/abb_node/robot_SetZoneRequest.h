// Generated by gencpp from file abb_node/robot_SetZoneRequest.msg
// DO NOT EDIT!


#ifndef ABB_NODE_MESSAGE_ROBOT_SETZONEREQUEST_H
#define ABB_NODE_MESSAGE_ROBOT_SETZONEREQUEST_H


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
struct robot_SetZoneRequest_
{
  typedef robot_SetZoneRequest_<ContainerAllocator> Type;

  robot_SetZoneRequest_()
    : mode(0)  {
    }
  robot_SetZoneRequest_(const ContainerAllocator& _alloc)
    : mode(0)  {
  (void)_alloc;
    }



   typedef int64_t _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> const> ConstPtr;

}; // struct robot_SetZoneRequest_

typedef ::abb_node::robot_SetZoneRequest_<std::allocator<void> > robot_SetZoneRequest;

typedef boost::shared_ptr< ::abb_node::robot_SetZoneRequest > robot_SetZoneRequestPtr;
typedef boost::shared_ptr< ::abb_node::robot_SetZoneRequest const> robot_SetZoneRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_node::robot_SetZoneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_node::robot_SetZoneRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SetZoneRequest_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_node::robot_SetZoneRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SetZoneRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "284404659b502753974e60f7457ed2dc";
  }

  static const char* value(const ::abb_node::robot_SetZoneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x284404659b502753ULL;
  static const uint64_t static_value2 = 0x974e60f7457ed2dcULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_node/robot_SetZoneRequest";
  }

  static const char* value(const ::abb_node::robot_SetZoneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Service to Set the Zone of the robot\n"
"# Mode - Name in RAPID - Linear  - Orientation\n"
"#   0        fine         0 mm        0°\n"
"#   1         z0          0.3 mm      0.03°  <- Default and recommended value.\n"
"#   2         z1          1 mm        0.1°\n"
"#   3         z5          5 mm        0.8°\n"
"#   4         z10         10 mm       1.5°\n"
"\n"
"int64 mode\n"
;
  }

  static const char* value(const ::abb_node::robot_SetZoneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_SetZoneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_node::robot_SetZoneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_node::robot_SetZoneRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<int64_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_NODE_MESSAGE_ROBOT_SETZONEREQUEST_H