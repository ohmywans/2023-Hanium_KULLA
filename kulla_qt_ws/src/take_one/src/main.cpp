#include "take_one/take_one.h"
#include "take_one/ui_take_one.h"
#include "take_one/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    take_one::take_one w(argc,argv);
    
    //w.show();

    return a.exec();
}