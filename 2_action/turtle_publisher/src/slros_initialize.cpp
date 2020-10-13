#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "turtle_publisher";

// For Block turtle_publisher/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_turtle_publisher_std_msgs_Float64> Sub_turtle_publisher_1;

// For Block turtle_publisher/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_turtle_publisher_std_msgs_Float64> Sub_turtle_publisher_2;

// For Block turtle_publisher/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_turtle_publisher_geometry_msgs_Twist> Pub_turtle_publisher_9;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

