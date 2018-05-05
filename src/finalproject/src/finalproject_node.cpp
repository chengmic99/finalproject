#include "ros/ros.h"
#include "hark_msgs/HarkSource.h"
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <math.h>
#include <tf/tf.h>
#include <Eigen/Geometry>
geometry_msgs::Pose robot_pose;
ros::Publisher pose_publisher;

void harkCallback(const hark_msgs::HarkSource::ConstPtr& message){
	ROS_INFO("receiving messages from Harksource topic");
	for (int i = 0; i < message->src.size(); i++){

		// double theta_degree = message->src[i].theta;
		// double phi_degree   = message->src[i].z;
			
		// double theta = theta_degree * M_PI / 180;
		// double phi   = phi_degree   * M_PI / 180;
		// double rho   = 1.5;
			
		// double x = rho * std::cos(theta);
		// double y = rho * std::sin(theta);
		// double z = rho * std::sin(phi);

		robot_pose.position.x = -1 * message->src[i].y;
		robot_pose.position.y = message->src[i].z;
		robot_pose.position.z = message->src[i].x;

		Eigen::Vector3d vec(robot_pose.position.x, 0, robot_pose.position.z);
		Eigen::Vector3d normVec = vec/vec.norm();
		double yaw = atan2(normVec(0), normVec(2));
		tf::Quaternion quatRPY;
		quatRPY.setRPY(0,0,-.5*yaw);

		robot_pose.orientation.w = quatRPY.w();
		robot_pose.orientation.x = quatRPY.x();
		robot_pose.orientation.y = quatRPY.y();
		robot_pose.orientation.z = quatRPY.z();	
	}
	pose_publisher.publish(robot_pose);
}
int main(int argc, char **argv){
	ros::init(argc, argv, "finalproject_node");
	ros::NodeHandle n;

	pose_publisher = n.advertise<geometry_msgs::Pose>("VoicePos", 1000);
	ros::Subscriber sub = n.subscribe("/HarkSource", 1, harkCallback);
	ros::Publisher robot_move = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1);
	ros::Time turn = ros::Time::now();
	ros::Rate rate(1000);
	geometry_msgs::Twist move;
	move.linear.x = 0;
	move.linear.y = 0;
	move.linear.x = 0;
	move.angular.y = 0;
	move.angular.z = 0;

	double current_angle = 0;
	double goal_angle = (120*M_PI/180);
	move.angular.z = -0.3;
	double orig_time = ros::Time::now().toSec();
	while(ros::ok() && current_angle < goal_angle){
		
		double current_time = ros::Time::now().toSec();
		current_angle = (0.3)*(current_time-orig_time);

		ROS_INFO_STREAM("is turning");
		// move.angular.x = robot_pose.orientation.x;
		// move.angular.y = robot_pose.orientation.y;
		// move.angular.z = robot_pose.orientation.z;
		
		robot_move.publish(move);
		ros::spinOnce();
		rate.sleep();
	}
	move.angular.z = 0;
	robot_move.publish(move);
	ros::spin();
}
