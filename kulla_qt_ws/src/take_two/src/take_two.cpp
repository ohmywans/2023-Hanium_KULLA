#include "take_two/take_two.h"
#include "take_two/ros_task.h"
#include "take_two/ui_take_two.h"

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

namespace take_two{

	take_two::take_two(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::take_two)
	{
        if(qnode.init()) isConnected = true;

        // give_take by take 버튼 -> take_mode 
        QObject::connect(&qnode, SIGNAL(give_take_ui()),this,SLOT(open_w2()));
        //cout << "setup take ui " << endl;
        
        ui->setupUi(this);
        //this->hide();
        //QMainWindow::showFullScreen();
	}

	take_two::~take_two()
	{
	    delete ui;
	}
	void take_two::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}

// give_take by take 버튼 -> take_mode 
void take_two::take_two::open_w2()
{
    cout<< "in open_window 2, TAKE" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
    //this->showFullScreen();
} 
// 서보모터 제어를 위한 함수
// take_mode에서 Servo 1 제어 : unlock 1 버튼 -> servo_answer = 5 
void take_two::take_two::on_Button_unlock1_clicked()
{
    take_two::unlock1 = 0;
    qnode.unlock1_control.data = take_two::unlock1;
    qnode.send_unlock1();
}
// take_mode에서 Servo 1 제어 : lock 1 버튼 -> servo_answer = 6 
void take_two::take_two::on_Button_lock1_clicked()
{
    take_two::lock1 = 180;
    qnode.lock1_control.data = take_two::lock1;
    qnode.send_lock1();
}

// 경유지에서 다음 목적지로 바로 갈 수 있도록 하는 9 값 publish
void take_two::take_two::on_Button_rec_clicked()
{
    take_two::received = 10;
    qnode.get_received.data = take_two::received;
    qnode.send_received();
    //==============================
    take_two::back = 1;
    qnode.num_back.data = take_two::back;
    qnode.send_back();
    this->hide();
    //==============================
}

void take_two::take_two::on_Button_back_clicked()
{
    //==============================
    take_two::back = 1;
    qnode.num_back.data = take_two::back;
    qnode.send_back();
    this->hide();
    //==============================
}