#include "give_one/give_one.h"
#include "give_one/ros_task.h"
#include "give_one/ui_give_one.h"

#include <ros/ros.h>
#include <std_msgs/Int32.h>

#include <iostream>
#include <QMessageBox>
#include <sstream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <QtGui>
#include <QCoreApplication>

using namespace std;

namespace give_one{

	give_one::give_one(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::give_one)
	{
        if(qnode.init()) isConnected = true;

        // give_take by give 버튼 -> give_mode 
        QObject::connect(&qnode, SIGNAL(give_take_ui()),this,SLOT(open_w1()));
        
        ui->setupUi(this);
        //QMainWindow::show();
        //QMainWindow::showFullScreen();
	}

	give_one::~give_one()
	{
	    delete ui;
	}
	void give_one::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}

void give_one::give_one::close_w1()
{
    cout<< "in close_w1" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 

// give_take by give 버튼 -> give_mode 뜨게 하는 함수
void give_one::give_one::open_w1()
{
    cout<< "in open_window 1, GIVE" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 

// 서보모터 제어를 위한 함수
// give_mode에서 Servo 1 제어 : unlock 1 버튼 -> servo_answer = 5 
void give_one::give_one::on_Button_unlock1_clicked()
{
    give_one::unlock1 = 0;
    qnode.unlock1_control.data = give_one::unlock1;
    qnode.send_unlock1();
}

// give_mode에서 Servo 1 제어 : lock 1 버튼 -> servo_answer = 6 
void give_one::give_one::on_Button_lock1_clicked()
{
    give_one::lock1 = 180;
    qnode.lock1_control.data = give_one::lock1;
    qnode.send_lock1();
}

// 거점 데이터 송신을 위한 함수
// Publish : 사용자 1, P1 = 1, P2 = 2, P3 = 3, P4 = 4
void give_one::give_one::on_Button_p1_clicked()
{
    give_one::p1 = 1;
    qnode.waypoint_p1.data = give_one::p1;
    qnode.send_p1();

    //==============================
    give_one::back = 1;
    qnode.num_back.data = give_one::back;
    qnode.send_back();
    this->hide();
    //==============================
}
void give_one::give_one::on_Button_p2_clicked()
{
    give_one::p2 = 2;
    qnode.waypoint_p2.data = give_one::p2;
    qnode.send_p2();

    //==============================
    give_one::back = 1;
    qnode.num_back.data = give_one::back;
    qnode.send_back();
    this->hide();
    //==============================
}
void give_one::give_one::on_Button_p3_clicked()
{
    give_one::p3 = 3;
    qnode.waypoint_p3.data = give_one::p3;
    qnode.send_p3();

    //==============================
    give_one::back = 1;
    qnode.num_back.data = give_one::back;
    qnode.send_back();
    this->hide();
    //==============================
}
void give_one::give_one::on_Button_p4_clicked()
{
    give_one::p4 = 4;
    qnode.waypoint_p4.data = give_one::p4;
    qnode.send_p4();

    //==============================
    give_one::back = 1;
    qnode.num_back.data = give_one::back;
    qnode.send_back();
    this->hide();
    //==============================
}

void give_one::give_one::on_Button_back_clicked()
{
    //==============================
    give_one::back = 1;
    qnode.num_back.data = give_one::back;
    qnode.send_back();
    this->hide();
    //==============================
}
