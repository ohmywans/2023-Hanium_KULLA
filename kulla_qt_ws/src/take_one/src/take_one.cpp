#include "take_one/take_one.h"
#include "take_one/ros_task.h"
#include "take_one/ui_take_one.h"

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

namespace take_one{

	take_one::take_one(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::take_one)
	{
        if(qnode.init()) isConnected = true;

        // give_take by take 버튼 -> take_mode 
        QObject::connect(&qnode, SIGNAL(give_take_ui()),this,SLOT(open_w2()));
        //cout << "setup take ui " << endl;
        
        ui->setupUi(this);
        //this->hide();
        //QMainWindow::showFullScreen();
	}

	take_one::~take_one()
	{
	    delete ui;
	}
	void take_one::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}

// give_take by take 버튼 -> take_mode 
void take_one::take_one::open_w2()
{
    cout<< "in open_window 2, TAKE" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 
// 서보모터 제어를 위한 함수
// take_mode에서 Servo 1 제어 : unlock 1 버튼 -> servo_answer = 5 
void take_one::take_one::on_Button_unlock1_clicked()
{
    take_one::unlock1 = 0;
    qnode.unlock1_control.data = take_one::unlock1;
    qnode.send_unlock1();
}
// take_mode에서 Servo 1 제어 : lock 1 버튼 -> servo_answer = 6 
void take_one::take_one::on_Button_lock1_clicked()
{
    take_one::lock1 = 180;
    qnode.lock1_control.data = take_one::lock1;
    qnode.send_lock1();
}

// 경유지에서 다음 목적지로 바로 갈 수 있도록 하는 9 값 publish
void take_one::take_one::on_Button_rec_clicked()
{
    take_one::received = 9;
    qnode.get_received.data = take_one::received;
    qnode.send_received();
    //==============================
    take_one::back = 1;
    qnode.num_back.data = take_one::back;
    qnode.send_back();
    this->hide();
    //==============================
    
}

void take_one::take_one::on_Button_back_clicked()
{
    //==============================
    take_one::back = 1;
    qnode.num_back.data = take_one::back;
    qnode.send_back();
    this->hide();
    //==============================
}