#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <iostream>
#include <std_msgs/Bool.h>
//#include <time.h>

class Call{
    protected:
        ros::NodeHandle g_nh;
        ros::Publisher goal_choice_pub = g_nh.advertise<std_msgs::Bool>("call_topic", 100);

        std_msgs::Int32 g_answer;

    public:
        Call();
        ~Call();
        void InsertNumber();
        bool _finish = false;
};

Call::Call(){}; 
Call::~Call(){};

//**********************************************
// Function name: InsertNumber()
// Comment: HMI 기능 구현 전 경유 기능 확인용 함수
//**********************************************
void Call::InsertNumber(){

    std::cout << "Enter call goal 1~4 : ";
    std::cin >> g_answer.data;                 // 지금은 cin으로 했지만 qt 노드에서 받아 오는 값으로 바꾸면 기능 구현 완료

    //*************입력값 확인용*************
    if(g_answer.data == 1){
        ROS_INFO("Go to 1");
    }
    else if(g_answer.data == 2){
        ROS_INFO("Go to 2");
    }
    else if(g_answer.data == 3){
        ROS_INFO("Go to 3");
    }
    else if(g_answer.data == 4){
        ROS_INFO("Go to 4");
    }
    //***************************************
    
    if(g_answer.data > 4){
        _finish = true;
    }
    goal_choice_pub.publish(g_answer);
}
//**********************************************

//**********************
// Function name: main()
//**********************
int main(int argc, char **argv){
    ros::init(argc, argv, "call_node");

    ros::NodeHandle nh;

    Call goal_choice;

    ros::Rate loop_rate(10);

    while(ros::ok()){

        goal_choice.InsertNumber();
        
        if(goal_choice._finish == true){
            ros::shutdown();
        }

        ros::spinOnce();

        loop_rate.sleep();
    }
}