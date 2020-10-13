#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "sine";

// For Block sine/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_sine_std_msgs_Float64> Pub_sine_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

