#include "take_two/take_two.h"
#include "take_two/ui_take_two.h"
#include "take_two/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    take_two::take_two w(argc,argv);
    
    //w.show();

    return a.exec();
}