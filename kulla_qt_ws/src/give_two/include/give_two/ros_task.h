#ifndef ROS_TASK
#define ROS_TASK
#ifndef Q_MOC_RUN
// ROS_TASK
#include <ros/ros.h>
#include <ros/node_handle.h>

#include <QThread>
#include <QStringListModel>
#include <string>
#include <vector>

#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>
#endif

namespace give_two{

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();

    // 서보모터 제어
    void send_unlock1();
    void send_lock1();
    std_msgs::Int32 unlock1_control;
    std_msgs::Int32 lock1_control;

    // Waypoint 송신
    void send_p1();
    void send_p2();
    void send_p3();
    void send_p4();
    std_msgs::Int32 waypoint_p1;
    std_msgs::Int32 waypoint_p2;
    std_msgs::Int32 waypoint_p3;
    std_msgs::Int32 waypoint_p4;

    //================================
    void send_back();

    std_msgs::Int32 num_back;
    //================================

Q_SIGNALS:
    void give_take_ui();

private:
    int init_argc;
    char** init_argv;
    
    // give or take : give 버튼 선택 시 sub
    ros::Subscriber sub_give_mode;

    // 서보모터 제어를 위한 Publisher 선언
    ros::Publisher pub_unlock1;
    ros::Publisher pub_lock1;

    // waypoint 송신을 위한 Publisher 선언
    ros::Publisher pub_p1;
    ros::Publisher pub_p2;
    ros::Publisher pub_p3;
    ros::Publisher pub_p4;

    //=====================
    ros::Publisher pub_back;
    //=====================

    ros::NodeHandle *nh;
    bool isConnected;

	};
}
#endif 