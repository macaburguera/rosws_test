#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "cosine";

// For Block cosine/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cosine_std_msgs_Float64> Sub_cosine_1;

// For Block cosine/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_cosine_std_msgs_Float64> Pub_cosine_7;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

