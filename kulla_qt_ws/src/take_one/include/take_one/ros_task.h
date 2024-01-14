#ifndef ROS_TASK
#define ROS_TASK
#ifndef Q_MOC_RUN

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

namespace take_one {

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

    // 9 값 송신
    void send_received();
    std_msgs::Int32 get_received;
    //================================
    void send_back();

    std_msgs::Int32 num_back;
    //================================

Q_SIGNALS:
    void give_take_ui();

private:
    int init_argc;
    char** init_argv;

    // give or take : take 버튼 선택 시 sub
    ros::Subscriber sub_take_mode;

    // 서보모터 제어를 위한 Publisher 선언
    ros::Publisher pub_unlock1;
    ros::Publisher pub_lock1;

    // 9 값 송신
    ros::Publisher pub_received;
    //=====================
    ros::Publisher pub_back;
    //=====================

    ros::NodeHandle *nh;
    bool isConnected;

	};
}

#endif 