#include "give_take/give_take.h"
#include "give_take/ros_task.h"
#include "give_take/ui_give_take.h"

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

namespace give_take{

	give_take::give_take(int argc, char** argv, QWidget *parent) :
	    QMainWindow(parent),
	    qnode(argc,argv),
	    ui(new Ui::give_take)
	{
		if(qnode.init()) isConnected = true;
		//=================================
		QObject::connect(&qnode, SIGNAL(give_one_ui()),this,SLOT(open_give_take()));
		//=================================
		
		ui->setupUi(this);
        //QMainWindow::showFullScreen();
   	}

	give_take::~give_take()
	{
	    delete ui;
	}
	void give_take::shownoROSmaster()
    {
        QMessageBox msgBox;
        msgBox.setText("Couldn't find the ros master.");
        msgBox.exec();
        close();
    }
}
//=================================================
void give_take::give_take::open_give_take(){
	cout << "in give_take window" << endl;
    // this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->show();
}
//==================================================
// void give_take::give_take::on_Button_give_clicked()
// {
// 	give_take::give_one = 1;
// 	qnode.num_give_one.data = give_take::give_one;
// 	qnode.send_give_one();
// 	this->hide();
// }

// void give_take::give_take::on_Button_take_clicked()
// {
// 	give_take::take_one = 1;
// 	qnode.num_take_one.data = give_take::take_one;
// 	qnode.send_take_one();
// 	this->hide();
// }

// void give_take::give_take::on_Button_give_2_clicked()
// {
// 	give_take::give_two = 1;
// 	qnode.num_give_two.data = give_take::give_two;
// 	qnode.send_give_two();
// 	this->hide();
// }

// void give_take::give_take::on_Button_take_2_clicked()
// {
// 	give_take::take_two = 1;
// 	qnode.num_take_two.data = give_take::take_two;
// 	qnode.send_take_two();
// 	this->hide();
// }

void give_take::give_take::on_Button_0_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "0");
}
void give_take::give_take::on_Button_1_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "1");
}
void give_take::give_take::on_Button_2_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "2");
}
void give_take::give_take::on_Button_3_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "3");
}
void give_take::give_take::on_Button_4_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "4");
}
void give_take::give_take::on_Button_5_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "5");
}
void give_take::give_take::on_Button_6_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "6");
}
void give_take::give_take::on_Button_7_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "7");
}
void give_take::give_take::on_Button_8_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "8");
}
void give_take::give_take::on_Button_9_clicked()
{
    ui->pw_status->setText(ui->pw_status->text() + "9");
}
void give_take::give_take::on_Button_rm_clicked()
{
    ui->mode_status->setText("");
	ui->pw_status->setText("");
}

void give_take::give_take::on_Button_give_clicked()
{
    ui->mode_status->setText("Give");
	ui->pw_status->setText("");	
}
void give_take::give_take::on_Button_take_clicked()
{
    ui->mode_status->setText("Take");
	ui->pw_status->setText("");	
}

void give_take::give_take::on_Button_Ent_clicked()
{
	QString mode = ui->mode_status->text();
   	QString pw = ui->pw_status->text();
    
	if(mode == "Give" && (pw == "1234" || pw == "5678"))
	{
		if(check == 20)
		{
			give_take::give_one = 1;
			qnode.num_give_one.data = give_take::give_one;
			qnode.send_give_one();
			this->hide();
			check = 10;
			if(pw == "1234")
			{
				fpw = 1234;
			}
			else if(pw == "5678")
			{
				fpw = 5678;
			}
		}

		else if(check == 10)
		{
			give_take::give_two = 1;
			qnode.num_give_two.data = give_take::give_two;
			qnode.send_give_two();
			this->hide();
			check = 20;

			if(pw == "1234")
			{
				spw = 1234;
			}
			else if(pw == "5678")
			{
				spw = 5678;
			}
		}
		else
		{
			give_take::give_one = 1;
			qnode.num_give_one.data = give_take::give_one;
			qnode.send_give_one();
			this->hide();
			check = 10;

			if(pw == "1234")
			{
				fpw = 1234;
		
			}
			else if(pw == "5678")
			{
				fpw = 5678;
			
			}
		}
	}
	
	else if(mode == "Take" && pw == "1234" )
	{
		rpw = 1234;
		if(fpw == rpw)
		{
			give_take::take_one = 1;
			qnode.num_take_one.data = give_take::take_one;
			qnode.send_take_one();
			this->hide();
			check = 20;
		}
		else if(spw == rpw)
		{
			give_take::take_two = 1;
			qnode.num_take_two.data = give_take::take_two;
			qnode.send_take_two();
			this->hide();
		}
	}
	else if(mode == "Take" && pw == "5678")
	{
		rpw = 5678;
		if(fpw == rpw)
		{
			give_take::take_one = 1;
			qnode.num_take_one.data = give_take::take_one;
			qnode.send_take_one();
			this->hide();
			check = 20;
		}
		else if(spw == rpw)
		{
			give_take::take_two = 1;
			qnode.num_take_two.data = give_take::take_two;
			qnode.send_take_two();
			this->hide();
		}
	}
	ui->mode_status->setText("");
	ui->pw_status->setText("");

	// if(mode == "Give" && pw == "1234"){
		
	// 	// check는 보관함 사용 유무 확인
	// 	// 첫 번째 사용자가 give_one을 눌렀을 때 else로 들어가서 정상 작동 된다.
	// 	// 두 번째 사용자가 give_one을 눌렀을 때는 check = 10이 asign되어서 if의 오류로 들어간다
	// 	// 그 후 첫 번째 수신자가 take_one을 눌렀을 때 check = 20으로 초기화 되어서 else if로 들어가면서 give_one을 다시 사용할 수 있게 된다.
	// 	if(check == 10){
	// 		//오류
	// 		ui->mode_status->setText("First User");
	// 		ui->pw_status->setText("Already Used");
	// 	}
	// 	else if(check == 20){
	// 		give_take::give_one = 1;
	// 		qnode.num_give_one.data = give_take::give_one;
	// 		qnode.send_give_one();
	// 		this->hide();

    // 		ui->mode_status->setText("");
	// 		ui->pw_status->setText("");			
	// 	}
	// 	else{
	// 		give_take::give_one = 1;
	// 		qnode.num_give_one.data = give_take::give_one;
	// 		qnode.send_give_one();
	// 		this->hide();

	// 		ui->mode_status->setText("");
	// 		ui->pw_status->setText("");
	// 	}
	// 	give_take::check = 10;

    // }
    // else if(mode == "Take" && pw == "1234"){
	// 	give_take::take_one = 1;
	// 	qnode.num_take_one.data = give_take::take_one;
	// 	qnode.send_take_one();

	// 	give_take::check = 20;

	// 	this->hide();

	// 	ui->mode_status->setText("");
	// 	ui->pw_status->setText("");		
    // }
	// else if(mode == "Give" && pw == "5678"){
	// 	give_take::give_two = 1;
	// 	qnode.num_give_two.data = give_take::give_two;
	// 	qnode.send_give_two();
	// 	this->hide();	

	// 	ui->mode_status->setText("");
	// 	ui->pw_status->setText("");				
    // }
	// else if(mode == "Take" && pw == "5678"){
	// 	give_take::take_two = 1;
	// 	qnode.num_take_two.data = give_take::take_two;
	// 	qnode.send_take_two();
	// 	this->hide();

	// 	ui->mode_status->setText("");
	// 	ui->pw_status->setText("");				
    // }
}

