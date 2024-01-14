#ifndef GIVE_TAKE_H
#define GIVE_TAKE_H
#ifndef Q_MOC_RUN

#include <QMainWindow>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <iostream>
#include <sstream>
#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/String.h>
#include "give_take/ros_task.h"
#include "give_take/ui_give_take.h"

using namespace std;
#endif

namespace give_take {

    class give_take : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit give_take(int argc, char** argv, QWidget *parent = 0);
        ~give_take();
        void shownoROSmaster();

    private Q_SLOTS:
        // void on_Button_give_clicked();
        // void on_Button_take_clicked();

        // void on_Button_give_2_clicked();
        // void on_Button_take_2_clicked(); 
    //====================================
    public Q_SLOTS:
        void open_give_take();

        void on_Button_0_clicked();
		void on_Button_1_clicked();
		void on_Button_2_clicked();
		void on_Button_3_clicked();
		void on_Button_4_clicked();
		void on_Button_5_clicked();
		void on_Button_6_clicked();
		void on_Button_7_clicked();
		void on_Button_8_clicked();
		void on_Button_9_clicked();
		void on_Button_rm_clicked();
		void on_Button_Ent_clicked();

        void on_Button_give_clicked();
        void on_Button_take_clicked();
    //=====================================
    private:
        Ui::give_take *ui;
        ros_task qnode;
        bool isConnected;   
    public:
        int give_one;
        int take_one;

        int check;
        int fpw;
        int spw;
        int rpw;
    
        int give_two;
        int take_two;        
    };
}
#endif // ADMIN_UI_H