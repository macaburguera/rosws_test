#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block cosine/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cosine_std_msgs_Float64> Sub_cosine_1;

// For Block cosine/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_cosine_std_msgs_Float64> Pub_cosine_7;

void slros_node_init(int argc, char** argv);

#endif
