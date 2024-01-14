#ifndef GIVE_TWO_H
#define GIVE_TWO_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>
#include <iostream>
#include <sstream>

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include "give_two/ros_task.h"
#include "give_two/ui_give_two.h"

using namespace std;
#endif

namespace give_two {

	class give_two : public QMainWindow
	{
	    Q_OBJECT

	public:
	    explicit give_two(int argc, char** argv, QWidget *parent = 0);
	    ~give_two();
	    void shownoROSmaster();

	public Q_SLOTS:
	    void close_w1();
	    void open_w1();
		void on_Button_unlock1_clicked();
		void on_Button_lock1_clicked();
		void on_Button_p1_clicked();
		void on_Button_p2_clicked();
		void on_Button_p3_clicked();
		void on_Button_p4_clicked();
		void on_Button_back_clicked();

	private:
	    Ui::give_two *ui;
	    ros_task qnode;
	    bool isConnected;
	public:
		int pushed;
		int unlock1;
		int lock1;
		int p1;
		int p2;
		int p3;
		int p4;

		//==============================
		int back;
		//==============================
	};
}
#endif // MERRY_WIN_H