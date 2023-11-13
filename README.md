# self_localization
# Description
This project was inspired by [Micvision Project](https://www.example.com), which provided by [tyuownu](https://github.com/tyuownu).
It help localization the robot when you navigation but do not know where the robot is.
# Install
Download the project to your workspace and build
```
$ cd your-catkin-workspace/src
$ git clone https://github.com/robovisVN/self_localization.git
$ cd ..
$ catkin_make
```
# Usage
Run your robot simulation environment or real robot.
```
#start localization node
$ rosrun self_localization self_localization_node

#find the location of the robot
$ rosservice call /StartLocalization
```
