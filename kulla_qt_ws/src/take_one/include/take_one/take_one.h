#ifndef TAKE_ONE_H
#define TAKE_ONE_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>
#include <iostream>
#include <sstream>

#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include "take_one/ros_task.h"
#include "take_one/ui_take_one.h"

#endif

namespace take_one {

	class take_one : public QMainWindow
	{
	    Q_OBJECT

	public:
	    explicit take_one(int argc, char** argv, QWidget *parent = 0);
	    ~take_one();
	    void shownoROSmaster();

	public Q_SLOTS:
		void open_w2();
		void on_Button_unlock1_clicked();
		void on_Button_lock1_clicked();
		void on_Button_rec_clicked();
		void on_Button_back_clicked();

	private:
	    Ui::take_one *ui;
	    ros_task qnode;
	    bool isConnected;
	public:
		int unlock1;
		int lock1;
		int received;

		//==============================
		int back;
		//==============================
	};
}
#endif // MERRY_WTWO_H