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

namespace give_take{

class ros_task : public QThread{
    Q_OBJECT

public:
    ros_task(int argc, char **argv);
    virtual ~ros_task();
    bool init();
    void init_nh();
    void run();

    void send_give_one();
    void send_take_one();

    void send_give_two();
    void send_take_two();    

    std_msgs::Int32 num_give_one;
    std_msgs::Int32 num_take_one;

    std_msgs::Int32 num_give_two;
    std_msgs::Int32 num_take_two;


Q_SIGNALS:
    //====================================
    void give_one_ui();
    //====================================

private:
    int init_argc;
    char** init_argv;

    ros::Publisher pub_give_one;
    ros::Publisher pub_take_one;

    ros::Publisher pub_give_two;
    ros::Publisher pub_take_two;

    //=========================
    ros::Subscriber sub_give_one_mode;
    //=========================
    ros::NodeHandle *nh;
    bool isConnected;
	};
}

#endif 