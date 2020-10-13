#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block turtle_publisher/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_turtle_publisher_std_msgs_Float64> Sub_turtle_publisher_1;

// For Block turtle_publisher/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_turtle_publisher_std_msgs_Float64> Sub_turtle_publisher_2;

// For Block turtle_publisher/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_turtle_publisher_geometry_msgs_Twist> Pub_turtle_publisher_9;

void slros_node_init(int argc, char** argv);

#endif
