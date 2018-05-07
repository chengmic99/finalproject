#include "ros/ros.h"
#include "hark_msgs/HarkSource.h"
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <math.h>


ros::Publisher robot_move;
double goalAngleDeg;
double canMove;

void harkCallback(const hark_msgs::HarkSource::ConstPtr& message){
	for (int i = 0; i < message->src.size(); i++){
		goalAngleDeg = message->src[i].azimuth;
		
		
	}

		
	ros::Time turn = ros::Time::now();
	ros::Rate rate(1000);
	geometry_msgs::Twist move;
	move.linear.x = 0;
	move.linear.y = 0;
	move.linear.x = 0;
	move.angular.y = 0;
	move.angular.z = 0;

	double current_angle = 0;
	double goal_angle = ((goalAngleDeg) *M_PI/180);
	move.angular.z = 0.3;
	double orig_time = ros::Time::now().toSec();

	

	while(ros::ok() && (current_angle < goal_angle)){

		ROS_INFO_STREAM(current_angle);

		double current_time = ros::Time::now().toSec();
		current_angle += (0.3)*(current_time-orig_time);
		orig_time = current_time;
		robot_move.publish(move);
		ros::spinOnce();
		rate.sleep();
	}
	move.angular.z = 0;
	robot_move.publish(move);
	
	
}
int main(int argc, char **argv){
	ros::init(argc, argv, "finalproject_node");
	ros::NodeHandle n;


	robot_move = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1);
	ros::Subscriber sub = n.subscribe("/HarkSource", 1, harkCallback);

	

	ros::spin();
	return 0;
}
