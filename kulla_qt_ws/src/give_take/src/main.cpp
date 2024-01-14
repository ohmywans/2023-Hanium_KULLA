#include "give_take/give_take.h"
#include "ui_admin_ui.h"
#include "give_take/ros_task.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    give_take::give_take w(argc,argv);
    w.show();

    return a.exec();
}