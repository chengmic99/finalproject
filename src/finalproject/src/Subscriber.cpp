#include "ros/ros.h"
#include "std_msgs/String.h"
#include "hark_msgs/HarkSource.h"

void localizationInfo(const hark_msgs::HarkSource::ConstPtr& message){
	ROS_INFO("receiving messages from Harksource topic");
	
}
int main(int argc, char **argv){
	ros::init(argc, argv, "Subscriber");
	ros::NodeHandle n;
	ros::Subscriber sub = n.subscribe("HarkSource", 1000, localizationInfo);
	ros::spin();
}
