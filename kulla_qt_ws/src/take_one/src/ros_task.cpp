#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "take_one/ros_task.h"
#include <iostream>

using namespace std;

namespace take_one{

  bool admin_close = 0;

    // give_take로부터 받는 콜백함수
    void sub_admin_callback(const std_msgs::Int32::ConstPtr& msg)
    {
      ROS_INFO("Give or Take Window_close");
      ROS_INFO("This is a Take Window");
      admin_close = 1; 
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
      ros::init(init_argc,init_argv,"take_mode");
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
        nh = new ros::NodeHandle("take_mode");

        // give_take by take 버튼 -> take_mode
        sub_take_mode =nh->subscribe("/take_one", 10, sub_admin_callback); 

        // take_mode에서 Servo 1 제어 : unlock 1 버튼
        pub_unlock1 = nh->advertise<std_msgs::Int32>("/servo1", 10);
        // take_mode에서 Servo 1 제어 : lock 1 버튼
        pub_lock1 = nh->advertise<std_msgs::Int32>("/servo1", 10);

        // 경유지에서 다음 목적지로 바로 갈 수 있도록 하는 9 값 publish
        pub_received = nh->advertise<std_msgs::Int32>("/website_second_topic", 10); // 거점 데이터 9 값 publish할 때, 토픽명
        //=====================================
        pub_back = nh->advertise<std_msgs::Int32>("/back", 10);
        //====================================

        //cout<<"init nh"<<endl;
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while (ros::ok()) 
      {
        // give_take by take 버튼 -> take_mode
        if(admin_close == 1)
        {
          Q_EMIT give_take_ui();
          cout<<"admin to take"<<endl;
          admin_close = 0;
        }

        ros::spinOnce();
        loop_rate.sleep();
      }
      ros::shutdown();
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    
    }

    // publish
    // Servo control to Publish
    // take_mode에서 Servo 1 제어 : unlock 1 버튼
    void ros_task::send_unlock1()
    {
      pub_unlock1.publish(unlock1_control);
    }

    // take_mode에서 Servo 1 제어 : lock 1 버튼
    void ros_task::send_lock1()
    {
      pub_lock1.publish(lock1_control);
    }

    // 경유지에서 다음 목적지로 바로 갈 수 있도록 하는 9 값 publish
    void ros_task::send_received()
    {
      pub_received.publish(get_received);
    }

    //===================================
    void ros_task::send_back(){
      pub_back.publish(num_back);
    }
    //===================================


}// namespace 