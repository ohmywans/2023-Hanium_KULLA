#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "give_one/ros_task.h"
#include <iostream>
using namespace std;

namespace give_one{

  bool give_take_close = 0;

    // give_take로부터 받는 콜백함수
    void sub_give_take_callback(const std_msgs::Int32::ConstPtr& msg)
    {
      ROS_INFO("Give or Take Window_close");
      ROS_INFO("This is a Give Window");
      give_take_close = 1; 
    }

    ros_task::ros_task(int argc, char** argv ) :
      init_argc(argc),
      init_argv(argv),
      isConnected(false)
    {
      //need space
    }

    ros_task::~ros_task() 
    {
      if(ros::isStarted()) 
      {
        ros::shutdown();
        ros::waitForShutdown();
      }
      delete nh;
      wait();
    }

    bool ros_task::init() 
    {
      //cout <<"init is here" <<endl;
      ros::init(init_argc,init_argv,"give_mode");
      if ( ! ros::master::check() ) 
      {
        return false;
      }
      init_nh();
      ros::start();
      start();
      return true;
    }

    void ros_task::init_nh()
      {
        nh = new ros::NodeHandle("give_mode");

        // give_take by give 버튼 -> give_mode
        sub_give_mode =nh->subscribe("/give_one", 10, sub_give_take_callback);

        // give_mode에서 Servo 1 제어 : unlock 1 버튼
        pub_unlock1 = nh->advertise<std_msgs::Int32>("/servo1", 10);
        // give_mode에서 Servo 1 제어 : lock 1 버튼
        pub_lock1 = nh->advertise<std_msgs::Int32>("/servo1", 10);

        // Publish : 사용자 1, P1 = 1, P2 = 2, P3 = 3, P4 = 4
        pub_p1 = nh->advertise<std_msgs::Int32>("/website_first_topic", 10); // 사용자 1의 거점 publish할 때, 토픽명
        pub_p2 = nh->advertise<std_msgs::Int32>("/website_first_topic", 10);
        pub_p3 = nh->advertise<std_msgs::Int32>("/website_first_topic", 10);
        pub_p4 = nh->advertise<std_msgs::Int32>("/website_first_topic", 10);

        //=====================================
        pub_back = nh->advertise<std_msgs::Int32>("/back", 10);
        //====================================
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while(ros::ok())
      {
        // give_take by give 버튼 -> give_mode
        if (give_take_close == 1)
        {
          Q_EMIT give_take_ui();
          cout<<"From admin to give"<<endl;
          give_take_close = 0;
        }

        ros::spinOnce();
        loop_rate.sleep();
      }
      ros::shutdown();
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }

    // publish
    // Servo control to Publish
    // give_mode에서 Servo 1 제어 : unlock 1 버튼
    void ros_task::send_unlock1()
    {
      pub_unlock1.publish(unlock1_control);
    }

    // give_mode에서 Servo 1 제어 : lock 1 버튼
    void ros_task::send_lock1()
    {
      pub_lock1.publish(lock1_control);
    }

    // Waypoint publish, 사용자 1: P1 = 1, P2 = 2, P3 = 3, P4 = 4
    void ros_task::send_p1()
    {
      pub_p1.publish(waypoint_p1);
    }
    void ros_task::send_p2()
    {
      pub_p2.publish(waypoint_p2);
    }
    void ros_task::send_p3()
    {
      pub_p3.publish(waypoint_p3);
    }
    void ros_task::send_p4()
    {
      pub_p4.publish(waypoint_p4);
    }

    //===================================
    void ros_task::send_back(){
      pub_back.publish(num_back);
    }
    //===================================

}// namespace 