
#include <abb_HW_interface/abb_hw_interface.h>

// ROS parameter loading

namespace abb_120_ns
{
AbbHWInterface::AbbHWInterface(ros::NodeHandle& nh, urdf::Model* urdf_model)
  :ros_control_boilerplate::GenericHWInterface(nh, urdf_model)
{
  bool ServicesInit =  ServiceInitalize();
  if (ServicesInit==false){ROS_WARN("SERVICES : Initialize Error");}
  bool SubscribeInit = SubscriberInitialize();
  if (SubscribeInit==false){ROS_WARN("SUBSCRIBER : Initialize Error");}
}





void AbbHWInterface::init()
{
    // Call parent class version of this function
    GenericHWInterface::init();
    //Create Service Clients

    ROS_INFO("ABBHWInterface Ready.");
}

bool AbbHWInterface::ServiceInitalize()
{
  try {


  SClient_Ping = nh_.serviceClient<abb_node::robot_Ping>("robot_Ping");
  SClient_SetCartesian = nh_.serviceClient<abb_node::robot_SetCartesian>("SetCartesian");
  SClient_GetCartesian = nh_.serviceClient<abb_node::robot_GetCartesian>("GetCartesian");
  SClient_SetJoints = nh_.serviceClient<abb_node::robot_SetJoints>("SetJoints");
  SClient_GetJoints = nh_.serviceClient<abb_node::robot_GetJoints>("GetJoints");
  SClient_Stop = nh_.serviceClient<abb_node::robot_Stop>("Stop");
  SClient_SetTool = nh_.serviceClient<abb_node::robot_SetTool>("SetTool");
  SClient_SetWorkObject = nh_.serviceClient<abb_node::robot_SetWorkObject>("SetWorkObject");
  SClient_SetSpeed = nh_.serviceClient<abb_node::robot_SetSpeed>("SetSpeed");
  SClient_SetZone = nh_.serviceClient<abb_node::robot_SetZone>("SetZone");
  SClient_SetTrackDist = nh_.serviceClient<abb_node::robot_SetTrackDist>("SetTrackDist");
  SClient_SpecialCommand = nh_.serviceClient<abb_node::robot_SpecialCommand>("SpecialCommand");
  SClient_SetComm = nh_.serviceClient<abb_node::robot_SetComm>("SetComm");
  SClient_SetVacuum = nh_.serviceClient<abb_node::robot_SetVacuum>("SetVacuum");
  SClient_SetDIO = nh_.serviceClient<abb_node::robot_SetDIO>("SetDIO");
  SClient_IsMoving = nh_.serviceClient<abb_node::robot_IsMoving>("IsMoving");
  }
  catch(...)
  {
    return false;
  }
  return true;
}

bool AbbHWInterface::SubscriberInitialize()
{
  try{
 handle_CartesianLog = nh_.subscribe("pose",100,&AbbHWInterface::CartesianLogCallback,this);
 handle_JointsLog    = nh_.subscribe("jointstate",100,&AbbHWInterface::HandleJointCallback,this);
 handle_ForceLog     = nh_.subscribe("wrench", 100,&AbbHWInterface::HandleJointCallback,this);
  }
  catch(...)
  {
    return false;
  }
  return true;
}





void AbbHWInterface::CartesianLogCallback(const geometry_msgs::PoseStamped::ConstPtr& msg)
{
  ROS_INFO("CARTESIAN CALLBACK");
  //this->iCPose = msg;

}
void AbbHWInterface::HandleJointCallback(const sensor_msgs::JointState::ConstPtr& msg)
{
  ROS_INFO("JOINT CALLBACK");

  for(int i;i<this->num_joints_;i++)
  {
  joint_position_[i] = msg->position[i] ;
  joint_velocity_[i] = msg->velocity[i] ;
  }
}
void AbbHWInterface::HandleForceLog(const geometry_msgs::WrenchStamped::ConstPtr& msg)
{

ROS_INFO("WRENCH CALLBACK");
//this->iWrench;
}

/*
 *
 *

# Service to get joint angles of the robot - robot_GetJoints
---
float64 j1
float64 j2
float64 j3
float64 j4
float64 j5
float64 j6
int64 ret
string msg
 */





void AbbHWInterface::read(ros::Duration& elapsed_time)
{
  static abb_node::robot_GetJoints jointMsg;
  static abb_node::robot_IsMoving isMoving;
  SClient_IsMoving.call(isMoving);
  SClient_GetJoints.call(jointMsg);
  ros::spinOnce();

}

void AbbHWInterface::write(ros::Duration& elapsed_time)
{


  static abb_node::robot_SetJoints nextPose;
  static abb_node::robot_SetSpeed nextSpeed;

  for(int i =0;i<num_joints_;i++)
  {


    nextPose.Request.position[i] =  joint_position_command_[i];
    nextSpeed.Request. joint_velocity_command_[i];


  }


  //num_joints_;
  //states

  // Commands


  //joint_position_command_;
  //joint_velocity_command_;
  //joint_effort_command_;

  // Safety
  //enforceLimits(elapsed_time);

  // NOTE: the following is a "simuation" example so that this boilerplate can be run without being
  // connected to hardware
  // When converting to your robot, remove the built-in PID loop and instead let the higher leverl
  // ros_control controllers take
  // care of PID loops for you. This P-controller is only intended to mimic the delay in real
  // hardware, somewhat like a simualator

}

void AbbHWInterface::enforceLimits(ros::Duration& period)
{
  // Enforces position and velocity
  pos_jnt_sat_interface_.enforceLimits(period);
}









}  // namespace abb_120_ns
