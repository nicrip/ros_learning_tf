#include <ros/ros.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "my_simpe_param");
  ros::NodeHandle node;

  while (!node.hasParam("my_param") and node.ok()) {
    ROS_INFO("No param named 'my_param' exists yet");
    ros::Duration(0.2).sleep();
  }
  double val;
  if (node.getParam("my_param", val)) {
    ROS_INFO("Got param 'my_param' with value: %f", val);
  }

  return 0;
};
