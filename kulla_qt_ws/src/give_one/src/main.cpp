#include "give_one/give_one.h"
#include "give_one/ui_give_one.h"
#include "give_one/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    give_one::give_one w(argc,argv);
    //w.show();
    //w.showFullScreen();

    return a.exec();
}