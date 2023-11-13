#include <ros/ros.h>
#include <self_localization.hpp>

int main(int argc, char** argv) {
  ros::init(argc, argv, "localization_node");
  ros::NodeHandle n;
  self_localization::RobotLocalization localization;

  localization.tracking();
  ros::spin();
  return 0;
}
