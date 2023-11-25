#include "ros/ros.h"
#include "turtlesim/Pose.h"



void chatterCallback(const turtlesim::Pose::ConstPtr& msg)
{
    
   ROS_INFO("Robot's position - X: %f, Y: %f", msg->x, msg->y);
  //std::cout<<"Robot's position - X:" << msg->x << "y"<< msg->y;
  }

int main(int argc, char **argv)
{
 
  ros::init(argc, argv, "listener");

  
  ros::NodeHandle n;

  
  ros::Subscriber sub = n.subscribe("/turtle1/pose", 1000, chatterCallback);

  
  ros::spin();

  return 0;
}

