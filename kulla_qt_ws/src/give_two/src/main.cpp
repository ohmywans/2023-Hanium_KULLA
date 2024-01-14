#include "give_two/give_two.h"
#include "give_two/ui_give_two.h"
#include "give_two/ros_task.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    give_two::give_two w(argc,argv);
    //w.show();
    //w.showFullScreen();


    return a.exec();
}