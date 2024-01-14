#include <ros/ros.h>
#include <ros/network.h>
#include <std_msgs/Int32.h>
#include "give_take/ros_task.h"
#include <iostream>
using namespace std;

namespace give_take{
  
    //=========================================
    bool give_one_close = 0;

    void sub_give_and_take_callback(const std_msgs::Int32::ConstPtr& msg) {
      ROS_INFO("Give_One Window_close");
      ROS_INFO("This is a Give_Take Window");
      give_one_close = 1; 
    }
    //=========================================
    ros_task::ros_task(int argc, char** argv) :
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
      ros::init(init_argc,init_argv,"give_take");
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
        nh = new ros::NodeHandle("give_take");

        // give or take 중 하나 누르면 give_take가 닫히고 누른 상태의 ui가 뜸
        pub_give_one = nh->advertise<std_msgs::Int32>("/give_one", 10);
        pub_take_one = nh->advertise<std_msgs::Int32>("/take_one", 10);

        pub_give_two = nh->advertise<std_msgs::Int32>("/give_two", 10);
        pub_take_two = nh->advertise<std_msgs::Int32>("/take_two", 10);        

        //================================
        sub_give_one_mode = nh->subscribe("/back", 10, sub_give_and_take_callback);
        //================================
        isConnected = true;
      }

    void ros_task::run()
    {
      ros::Rate loop_rate(10);
      while(ros::ok())
      {
        //===============================
        if (give_one_close == 1)
        {
          Q_EMIT give_one_ui();
          cout<<"From admin to give"<<endl;
          give_one_close = 0;
        }
        //===============================
        ros::spinOnce();
        loop_rate.sleep();
      }
      ros::shutdown();
      std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
    }
    // publish
    void ros_task::send_give_one()
    {
      pub_give_one.publish(num_give_one);
    }
    void ros_task::send_take_one()
    {
      pub_take_one.publish(num_take_one);
    }

    void ros_task::send_give_two()
    {
      pub_give_two.publish(num_give_two);
    }
    void ros_task::send_take_two()
    {
      pub_take_two.publish(num_take_two);
    }

}// namespace 