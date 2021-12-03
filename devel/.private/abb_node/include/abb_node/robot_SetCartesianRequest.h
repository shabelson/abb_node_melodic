// Generated by gencpp from file abb_node/robot_SetCartesianRequest.msg
// DO NOT EDIT!


#ifndef ABB_NODE_MESSAGE_ROBOT_SETCARTESIANREQUEST_H
#define ABB_NODE_MESSAGE_ROBOT_SETCARTESIANREQUEST_H


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
struct robot_SetCartesianRequest_
{
  typedef robot_SetCartesianRequest_<ContainerAllocator> Type;

  robot_SetCartesianRequest_()
    : cartesian()
    , quaternion()  {
    }
  robot_SetCartesianRequest_(const ContainerAllocator& _alloc)
    : cartesian(_alloc)
    , quaternion(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _cartesian_type;
  _cartesian_type cartesian;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _quaternion_type;
  _quaternion_type quaternion;





  typedef boost::shared_ptr< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> const> ConstPtr;

}; // struct robot_SetCartesianRequest_

typedef ::abb_node::robot_SetCartesianRequest_<std::allocator<void> > robot_SetCartesianRequest;

typedef boost::shared_ptr< ::abb_node::robot_SetCartesianRequest > robot_SetCartesianRequestPtr;
typedef boost::shared_ptr< ::abb_node::robot_SetCartesianRequest const> robot_SetCartesianRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cartesian == rhs.cartesian &&
    lhs.quaternion == rhs.quaternion;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator1> & lhs, const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58d2d1e6aec0ba31449f4caaba772e31";
  }

  static const char* value(const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58d2d1e6aec0ba31ULL;
  static const uint64_t static_value2 = 0x449f4caaba772e31ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_node/robot_SetCartesianRequest";
  }

  static const char* value(const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Service to Set Cartesians\n"
"float64[] cartesian\n"
"float64[] quaternion\n"
;
  }

  static const char* value(const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cartesian);
      stream.next(m.quaternion);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_SetCartesianRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_node::robot_SetCartesianRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_node::robot_SetCartesianRequest_<ContainerAllocator>& v)
  {
    s << indent << "cartesian[]" << std::endl;
    for (size_t i = 0; i < v.cartesian.size(); ++i)
    {
      s << indent << "  cartesian[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cartesian[i]);
    }
    s << indent << "quaternion[]" << std::endl;
    for (size_t i = 0; i < v.quaternion.size(); ++i)
    {
      s << indent << "  quaternion[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.quaternion[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_NODE_MESSAGE_ROBOT_SETCARTESIANREQUEST_H