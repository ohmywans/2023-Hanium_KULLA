#include <iostream>
#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <iostream>
#include <std_msgs/Int32.h>
#include <std_msgs/Bool.h>
#include <math.h>

class My_waypoint{
  protected:
    ros::NodeHandle g_nh;
    ros::Subscriber website_first_sub = g_nh.subscribe<std_msgs::Int32>("website_first_topic",100, &My_waypoint::website_first_callback, this);
    ros::Subscriber website_second_sub = g_nh.subscribe<std_msgs::Int32>("website_second_topic",100, &My_waypoint::website_second_callback, this);
    // ros::Subscriber website_click_sub = g_nh.subscribe<std_msgs::Int32>("website_click_topic",100, &My_waypoint::website_click_callback, this);
    ros::Subscriber call_sub = g_nh.subscribe<std_msgs::Int32>("call_topic",100, &My_waypoint::call_callback, this);

    ros::Publisher goal_pub = g_nh.advertise<geometry_msgs::PoseStamped>("/move_base_simple/goal", 100);

    geometry_msgs::PoseStamped first_pose_stamped;
    geometry_msgs::PoseStamped second_pose_stamped;
    geometry_msgs::PoseStamped call_pose_stamped;

    int qt_first_ = 0;
    int qt_second_ = 0;
    // int website_click_answer = 0;   
    int call_answer = 0;

    bool web_first_toggle = false;
    bool web_second_toggle = false;
    bool call_toggle = false;

    // turtlebot simulation point
    // double a_x = -0.0, a_y = -2.0, a_z = 0.00285567560465, a_w = 0.99999592255;
    // double b_x = 2.0, b_y = 0.0, b_z = 0.692586820972, b_w = 0.721334523932; 
    // double c_x = 0.0, c_y = 2.0, c_z = 0.999999999528, c_w = 3.07122853093e-05; 
    // double d_x = -2.0, d_y = 0.0, d_z = 0.00831169191608, d_w = 0.999965457292; 

    double a_x = 0.0, a_y = 0.0, a_z = 0.002, a_w = 0.999;
    double b_x = 1.76, b_y = 0.01, b_z = 0.002, b_w = 0.999; 
    double c_x = 1.53, c_y = 1.17, c_z = 0.002, c_w = 0.999; 
    double d_x = -0.16, d_y = 1.00, d_z = 0.002, d_w = 0.999; 

  public:
    My_waypoint();
    ~My_waypoint();
    void website_first_callback(const std_msgs::Int32ConstPtr& msg);
    void website_second_callback(const std_msgs::Int32ConstPtr& msg);
    void website_click_callback(const std_msgs::Int32ConstPtr& msg);
    void call_callback(const std_msgs::Int32ConstPtr& msg);
    void goal_select();
    void call_goal_select();
    void short_distance();
    void priority();

    // 한 번만 돌게 하기 위해서 추가한 토글 변수
    bool loop_only_once_website_toggle = false;
    bool loop_only_once_call_toggle = false;

    bool call_block = 0;    // take one이 recieved를 눌렀는지 확인 변수
    bool second_check = 0;  // give two를 (거점 지정)사용하는지 확인 변수
    bool call_check = 0;   // 호출을 했는지 (호출을 한 번만 할 수 있게) 확인 변수
};

My_waypoint::My_waypoint(){}

My_waypoint::~My_waypoint(){}

// 사용자1에게 받는 목적지 거점
void My_waypoint::website_first_callback(const std_msgs::Int32ConstPtr& msg){
  qt_first_ = msg->data;
  web_first_toggle = true;

  // 토픽이 들어오면 토글 true
  loop_only_once_website_toggle = true;
}

// 사용자2에게 받는 목적지 거점
void My_waypoint::website_second_callback(const std_msgs::Int32ConstPtr& msg){
  qt_second_ = msg->data;
  web_second_toggle = true;

  // 토픽이 들어오면 토글 true
  loop_only_once_website_toggle = true;
}

// 사용자2에게 받는 경유지
void My_waypoint::call_callback(const std_msgs::Int32ConstPtr& msg){
  call_answer = msg->data;
  call_toggle = true;

  // 토픽이 들어오면 토글 true
  loop_only_once_call_toggle = true;
}

//*****************************
// Function name: goal_select()
// Comment: 배송 보낼 거점 설정
//*****************************
void My_waypoint::goal_select(){

  // 사용자1에게 받는 목적지 거점 좌표  
  if(web_first_toggle == true){
    
    if(qt_first_ == 1){

      //first_pose_stamped.header.stamp = ros::Time::now();
      first_pose_stamped.header.frame_id = "map";
      first_pose_stamped.pose.position.x = a_x;
      first_pose_stamped.pose.position.y = a_y;
      first_pose_stamped.pose.orientation.z = a_z;
      first_pose_stamped.pose.orientation.w = a_w;

      // Print the pose information to the terminal
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", first_pose_stamped.pose.position.x, first_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", first_pose_stamped.pose.orientation.z, first_pose_stamped.pose.orientation.w);
      call_check = 0;
    }
    else if(qt_first_ == 2){

      //first_pose_stamped.header.stamp = ros::Time::now();
      first_pose_stamped.header.frame_id = "map";
      first_pose_stamped.pose.position.x = b_x;
      first_pose_stamped.pose.position.y = b_y;
      first_pose_stamped.pose.orientation.z = b_z;
      first_pose_stamped.pose.orientation.w = b_w;
    
      // Print the pose information to the terminal
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", first_pose_stamped.pose.position.x, first_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", first_pose_stamped.pose.orientation.z, first_pose_stamped.pose.orientation.w);
      call_check = 0;
    }
    else if(qt_first_ == 3){

      //first_pose_stamped.header.stamp = ros::Time::now();
      first_pose_stamped.header.frame_id = "map";
      first_pose_stamped.pose.position.x = c_x;
      first_pose_stamped.pose.position.y = c_y;
      first_pose_stamped.pose.orientation.z = c_z;
      first_pose_stamped.pose.orientation.w = c_w;

      // Print the pose information to the terminal
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", first_pose_stamped.pose.position.x, first_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", first_pose_stamped.pose.orientation.z, first_pose_stamped.pose.orientation.w);
      call_check = 0;
    }
    else if(qt_first_ == 4){

      //first_pose_stamped.header.stamp = ros::Time::now();
      first_pose_stamped.header.frame_id = "map";
      first_pose_stamped.pose.position.x = d_x;
      first_pose_stamped.pose.position.y = d_y;
      first_pose_stamped.pose.orientation.z = d_z;
      first_pose_stamped.pose.orientation.w = d_w;

      // Print the pose information to the terminal
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", first_pose_stamped.pose.position.x, first_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", first_pose_stamped.pose.orientation.z, first_pose_stamped.pose.orientation.w);
      call_check = 0;
    }

    ROS_INFO("---------------------------------------");
    /*
    첫 번째 시나리오(첫 번째, 두 번째 사용자)가 끝나고 세 번째 사용자가 사용을 할 때 
    short_distance 함수에서 qt_first_ == 9 (receive)인 경우로 들어갈 때 정지하기 위함 
    -> 이걸 하지 않으면 그 전 사용자 2의 목적지가 남아 있어서 사용자 2의 목적지로 넘어간다.
    second_pose_stamped를 초기화: 사용자가 한 명이면 사용자 1만 사용
    */

    // 거점 간 최단 거리 경유지 방법을 사용할 때 주석을 지워야 함.
    second_pose_stamped = first_pose_stamped;
    goal_pub.publish(first_pose_stamped);
    web_first_toggle = false;

  }

  // 사용자 2에게 받는 목적지 거점 좌표
  if(web_second_toggle == true){
    
    // 사용자1에게 받는 목적지 거점 좌표
    if(qt_second_ == 5){

      //second_pose_stamped.header.stamp = ros::Time::now();
      second_pose_stamped.header.frame_id = "map";
      second_pose_stamped.pose.position.x = a_x;
      second_pose_stamped.pose.position.y = a_y;
      second_pose_stamped.pose.orientation.z = a_z;
      second_pose_stamped.pose.orientation.w = a_w;

      // Print the pose information to the terminal
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", second_pose_stamped.pose.position.x, second_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", second_pose_stamped.pose.orientation.z, second_pose_stamped.pose.orientation.w);
      second_check = 1;   // give two 거점 선택 확인
    }
    else if(qt_second_ == 6){

      //second_pose_stamped.header.stamp = ros::Time::now();
      second_pose_stamped.header.frame_id = "map";
      second_pose_stamped.pose.position.x = b_x;
      second_pose_stamped.pose.position.y = b_y;
      second_pose_stamped.pose.orientation.z = b_z;
      second_pose_stamped.pose.orientation.w = b_w;
    
      // Print the pose information to the terminal
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", second_pose_stamped.pose.position.x, second_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", second_pose_stamped.pose.orientation.z, second_pose_stamped.pose.orientation.w);
      second_check = 1;   // give two 거점 선택 확인
    }
    else if(qt_second_ == 7){

      //second_pose_stamped.header.stamp = ros::Time::now();
      second_pose_stamped.header.frame_id = "map";
      second_pose_stamped.pose.position.x = c_x;
      second_pose_stamped.pose.position.y = c_y;
      second_pose_stamped.pose.orientation.z = c_z;
      second_pose_stamped.pose.orientation.w = c_w;

      // Pose 정보 출력
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", second_pose_stamped.pose.position.x, second_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", second_pose_stamped.pose.orientation.z, second_pose_stamped.pose.orientation.w);
      second_check = 1;   // give two 거점 선택 확인
    }
    else if(qt_second_ == 8){

      //second_pose_stamped.header.stamp = ros::Time::now();
      second_pose_stamped.header.frame_id = "map";
      second_pose_stamped.pose.position.x = d_x;
      second_pose_stamped.pose.position.y = d_y;
      second_pose_stamped.pose.orientation.z = d_z;
      second_pose_stamped.pose.orientation.w = d_w;

      // Print the pose information to the terminal
      ROS_INFO("Goal pose:");
      ROS_INFO("  Website_Position: x = %f, y = %f", second_pose_stamped.pose.position.x, second_pose_stamped.pose.position.y);
      ROS_INFO("  Website_Orientaion: z = %f, w = %f", second_pose_stamped.pose.orientation.z, second_pose_stamped.pose.orientation.w);
      second_check = 1;   // give two 거점 선택 확인

    }

    ROS_INFO("---------------------------------------");
  }
}
//*****************************

//**********************************
// Function name: call_goal_select()
// Comment: 호출할 때 위치 설정 
//**********************************
void My_waypoint::call_goal_select(){

  if(call_toggle == true && call_check == 0){
    //Point A 
    if(call_answer == 49){

      //call_pose_stamped.header.stamp = ros::Time::now();
      call_pose_stamped.header.frame_id = "map";
      call_pose_stamped.pose.position.x = a_x;
      call_pose_stamped.pose.position.y = a_y;
      call_pose_stamped.pose.orientation.z = a_z;
      call_pose_stamped.pose.orientation.w = a_w;

      // Print the pose information to the terminal
      ROS_INFO("Call pose:");
      ROS_INFO("  Call_Position: x = %f, y = %f", call_pose_stamped.pose.position.x, call_pose_stamped.pose.position.y);
      ROS_INFO("  Call_Orientaion: z = %f, w = %f", call_pose_stamped.pose.orientation.z, call_pose_stamped.pose.orientation.w);

    }
    //Point B
    else if(call_answer == 50){

      //call_pose_stamped.header.stamp = ros::Time::now();
      call_pose_stamped.header.frame_id = "map";
      call_pose_stamped.pose.position.x = b_x;
      call_pose_stamped.pose.position.y = b_y;
      call_pose_stamped.pose.orientation.z = b_z;
      call_pose_stamped.pose.orientation.w = b_w;
    
      // Print the pose information to the terminal
      ROS_INFO("Call pose:");
      ROS_INFO("  Call_Position: x = %f, y = %f", call_pose_stamped.pose.position.x, call_pose_stamped.pose.position.y);
      ROS_INFO("  Call_Orientaion: z = %f, w = %f", call_pose_stamped.pose.orientation.z, call_pose_stamped.pose.orientation.w);

    }
    //Point C
    else if(call_answer == 51){

      //call_pose_stamped.header.stamp = ros::Time::now();
      call_pose_stamped.header.frame_id = "map";
      call_pose_stamped.pose.position.x = c_x;
      call_pose_stamped.pose.position.y = c_y;
      call_pose_stamped.pose.orientation.z = c_z;
      call_pose_stamped.pose.orientation.w = c_w;

      // Print the pose information to the terminal
      ROS_INFO("Call pose:");
      ROS_INFO("  Call_Position: x = %f, y = %f", call_pose_stamped.pose.position.x, call_pose_stamped.pose.position.y);
      ROS_INFO("  Call_Orientaion: z = %f, w = %f", call_pose_stamped.pose.orientation.z, call_pose_stamped.pose.orientation.w);

    }
    //Point D
    else if(call_answer == 52){

      //call_pose_stamped.header.stamp = ros::Time::now();
      call_pose_stamped.header.frame_id = "map";
      call_pose_stamped.pose.position.x = d_x;
      call_pose_stamped.pose.position.y = d_y;
      call_pose_stamped.pose.orientation.z = d_z;
      call_pose_stamped.pose.orientation.w = d_w;

      // Print the pose information to the terminal
      ROS_INFO("Call pose:");
      ROS_INFO("  Call_Position: x = %f, y = %f", call_pose_stamped.pose.position.x, call_pose_stamped.pose.position.y);
      ROS_INFO("  Call_Orientaion: z = %f, w = %f", call_pose_stamped.pose.orientation.z, call_pose_stamped.pose.orientation.w);

    }

    ROS_INFO("---------------------------------------");
    
    // take one이 recived를 하지 않고 give two가 거점 선택을 하지 않았을 경우 Edge case 처리
    if(call_block == 0 && second_check == 0){

      goal_pub.publish(call_pose_stamped);

    }
    call_check = 1;      // 호출을 1번한 경우를 구분하기 위해 call_check 변수를 1로 설정
    call_toggle = false;

    //초기화
    call_answer = 0;
  }
}
//**********************************


//************************************************************************
// Function name: short_distance()
// Algorithm name: 최단거리 경유지 알고리즘
// Comment: 거점 선택 시 최단 거리를 우선으로 다음 목적지 선택하는 알고리즘 
//************************************************************************
// void 초기 등록 거점 과 경유지에서 등록 거점 비교 함수(), qt_second_ == 9 : take_one / qt_second_ == 10 : take_two
void My_waypoint::short_distance(){

  if(qt_second_ == 5 || qt_second_ == 6 || qt_second_ == 7 || qt_second_ == 8 || qt_second_ == 9 || qt_second_ == 9 || qt_second_ == 10){

    ROS_INFO("click : %d", qt_second_);

    // 호출한 위치에서 사용자 1의 목적지가 사용자 2의 목적지보다 거리가 짧은 경우
    if(sqrt(abs(pow((call_pose_stamped.pose.position.x - first_pose_stamped.pose.position.x), 2) + pow((call_pose_stamped.pose.position.y - first_pose_stamped.pose.position.y), 2))) 
        < sqrt(abs(pow((call_pose_stamped.pose.position.x - second_pose_stamped.pose.position.x), 2) + pow((call_pose_stamped.pose.position.y - second_pose_stamped.pose.position.y), 2)))){

      ROS_INFO("click_first : %d", qt_second_);

      ROS_INFO("1_Stopover pose:");
      ROS_INFO("  1_Short_Position: x = %f, y = %f", first_pose_stamped.pose.position.x, first_pose_stamped.pose.position.y);
      ROS_INFO("  1_Short_Orientaion: z = %f, w = %f", first_pose_stamped.pose.orientation.z, first_pose_stamped.pose.orientation.w);

      // 사용자 1의 목적지로 감
      goal_pub.publish(first_pose_stamped);

      // 수령자 1이 물건을 수령한 후 '수령 완료' 버튼을 누르면 다음 목적지로 간다.
      if(qt_second_ == 9){
        goal_pub.publish(second_pose_stamped);  // 사용자 2의 목적지로 가라
      }
    }
    // 호출한 위치에서 사용자 1의 목적지가 사용자 2의 목적지 보다 거리가 먼 경우
    else if(sqrt(abs(pow((call_pose_stamped.pose.position.x - first_pose_stamped.pose.position.x), 2) + pow((call_pose_stamped.pose.position.y - first_pose_stamped.pose.position.y), 2))) 
            > sqrt(abs(pow((call_pose_stamped.pose.position.x - second_pose_stamped.pose.position.x), 2) + pow((call_pose_stamped.pose.position.y - second_pose_stamped.pose.position.y), 2)))){
    
      ROS_INFO("click_second : %d", qt_second_);

      ROS_INFO("2_Stopover pose:");
      ROS_INFO("  2_Short_Position: x = %f, y = %f", second_pose_stamped.pose.position.x, second_pose_stamped.pose.position.y);
      ROS_INFO("  2_Short_Orientaion: z = %f, w = %f", second_pose_stamped.pose.orientation.z, second_pose_stamped.pose.orientation.w);

      // 사용자 2의 목적지로 가라
      goal_pub.publish(second_pose_stamped);

      // 수령자 2가 물건을 수령한 후 '수령 완료' 버튼을 누르면 다음 목적지로 간다.
      if(qt_second_ == 10){
        goal_pub.publish(first_pose_stamped); // 사용자 1의 목적지로 가라
      }
    }
    // 호출한 위치에서 사용자 1의 목적지가 사용자 2의 목적지의 거리가 같은 경우, 먼저 배송을 보낸 사용자 1의 목적지에 먼저 가라.
    else if(sqrt(abs(pow((call_pose_stamped.pose.position.x - first_pose_stamped.pose.position.x), 2) + pow((call_pose_stamped.pose.position.y - first_pose_stamped.pose.position.y), 2))) 
            == sqrt(abs(pow((call_pose_stamped.pose.position.x - second_pose_stamped.pose.position.x), 2) + pow((call_pose_stamped.pose.position.y - second_pose_stamped.pose.position.y), 2)))){
      
      ROS_INFO("click_third : %d", qt_second_);

      ROS_INFO("3_Stopover pose:");
      ROS_INFO("  3_Short_Position: x = %f, y = %f", first_pose_stamped.pose.position.x, first_pose_stamped.pose.position.y);
      ROS_INFO("  3_Short_Orientaion: z = %f, w = %f", first_pose_stamped.pose.orientation.z, first_pose_stamped.pose.orientation.w);

      // 사용자 1의 목적지로 가라
      goal_pub.publish(first_pose_stamped);

      // 수령자 1이 물건을 수령한 후 '수령 완료' 버튼을 누르면 다음 목적지로 간다.
      if(qt_second_ == 9){
        goal_pub.publish(second_pose_stamped);  // 사용자 2의 목적지로 가라
      }

    }

    ROS_INFO("---------------------------------------");

    // qt_second_/ qt_first_ 데이터값 초기화
    qt_first_ = 0;
    qt_second_ = 0;
  }

}
//************************************************************************


//************************************************************************
// Function name: priority()
// Algorithm name: 사용자 우선순위 알고리즘
// Comment: 거점 선택 시 호출 순서를 우선으로 다음 목적지 선택하는 알고리즘 
//************************************************************************
void My_waypoint::priority(){

  if(qt_second_ == 5 || qt_second_ == 6 || qt_second_ == 7 || qt_second_ == 8 || qt_second_ == 9 || qt_second_ == 10){
      
      ROS_INFO("click : %d", qt_second_);
      ROS_INFO("call_block : %d", call_block);

      //second user에서 거점을 지정하면 first user의 거점으로 이동
      if(qt_second_ == 5 || qt_second_ == 6 || qt_second_ == 7 || qt_second_ == 8 ){
        
        // 사용자 1의 목적지로 가라
        goal_pub.publish(first_pose_stamped);       
      }
      // take one이 물건을 수령한 후 'received' 버튼을 누르면 다음 목적지로 간다. 
      // give two의 거점이 선택되는 것을 확인(second_check == 1) & 호출을 한 번만 하게 막는다.
      else if(call_block == 0 && second_check == 1 && qt_second_ == 9){     // recieved가 들어왔을때
        goal_pub.publish(second_pose_stamped);                              // 사용자 2의 목적지로 가라
        call_block = 1;                                                     // take one 에서 received를 눌렀음을 확인
        call_check = 0;                                                     // 호출을 할 수 있게끔 만들어준다.

        call_pose_stamped = second_pose_stamped;                            // take two에서 received를 눌렀을 때 로봇이 그 거점을 유지하도록 설정(초기화)

        std::cout << "call check 1? " << call_block << std::endl;
        std::cout << "  " << std::endl;
      }
      // take two이 물건을 수령한 후 'received' 버튼을 누르면 다음 호출 거점으로 간다. 호출을 하지 않으면 그대로 있음
      else if(call_block == 1 && qt_second_ == 10){
        
        goal_pub.publish(call_pose_stamped);                                // C->D로 이동이 끝난 후에 이동 시 호출을 한 거점으로 이동
        call_block = 0;                                                     // 루틴이 끝나면 호출이 될 수 있도록 call_block 설정
        second_check = 0;                                                   // 루틴이 끝나면 give two 거점 선택 확인 변수 초기화 -> 호출을 할 수 있게 초기화
        call_check = 0;                                                     // 호출을 할 수 있게끔 만들어준다.

        std::cout << "call check 0? " << call_block << std::endl;
        std::cout << "  " << std::endl;
      }
  }
}
//************************************************************************

//************************************************************************
// Function name: main()
//************************************************************************
int main(int argc, char** argv) {
  ros::init(argc, argv, "goal_node");

  My_waypoint my_waypoint; 

  ros::Rate loop_rate(10);

  while(ros::ok()){

    // 한 번만 돌게 하기 위해서 toggle 조건 판단

    // website에서 배송 보낼 거점 결정
    if(my_waypoint.loop_only_once_website_toggle){
      my_waypoint.goal_select();
      //my_waypoint.short_distance();
      //my_waypoint.user_priority();
      my_waypoint.priority();

      my_waypoint.loop_only_once_website_toggle = false; // goal_select() 함수를 한 번 수행했으므로 토글 false
    }

    // 호출할 거점 정보
    if(my_waypoint.loop_only_once_call_toggle){
      my_waypoint.call_goal_select();
      my_waypoint.loop_only_once_call_toggle = false; // goal_select() 함수를 한 번 수행했으므로 토글 false
    }

    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}