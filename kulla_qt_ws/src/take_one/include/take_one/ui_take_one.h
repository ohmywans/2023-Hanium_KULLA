/********************************************************************************
** Form generated from reading UI file 'take_one.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKE_ONE_H
#define UI_TAKE_ONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_take_one
{
public:
    QWidget *centralWidget;
    QPushButton *Button_rec;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_unlock1;
    QPushButton *Button_lock1;
    QPushButton *Button_back;
    QTextEdit *textEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *take_one)
    {
        if (take_one->objectName().isEmpty())
            take_one->setObjectName(QString::fromUtf8("take_one"));
        take_one->resize(1024, 600);
        centralWidget = new QWidget(take_one);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Button_rec = new QPushButton(centralWidget);
        Button_rec->setObjectName(QString::fromUtf8("Button_rec"));
        Button_rec->setGeometry(QRect(10, 320, 451, 161));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_rec->sizePolicy().hasHeightForWidth());
        Button_rec->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(28);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        Button_rec->setFont(font);
        Button_rec->setStyleSheet(QString::fromUtf8("font: Bold 28pt \"Ubuntu\";"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 50, 451, 271));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Button_unlock1 = new QPushButton(horizontalLayoutWidget);
        Button_unlock1->setObjectName(QString::fromUtf8("Button_unlock1"));
        sizePolicy.setHeightForWidth(Button_unlock1->sizePolicy().hasHeightForWidth());
        Button_unlock1->setSizePolicy(sizePolicy);
        Button_unlock1->setStyleSheet(QString::fromUtf8("font: Bold 28pt \"Ubuntu\";"));

        horizontalLayout->addWidget(Button_unlock1);

        Button_lock1 = new QPushButton(horizontalLayoutWidget);
        Button_lock1->setObjectName(QString::fromUtf8("Button_lock1"));
        sizePolicy.setHeightForWidth(Button_lock1->sizePolicy().hasHeightForWidth());
        Button_lock1->setSizePolicy(sizePolicy);
        Button_lock1->setStyleSheet(QString::fromUtf8("font: Bold 28pt \"Ubuntu\";"));

        horizontalLayout->addWidget(Button_lock1);

        Button_back = new QPushButton(centralWidget);
        Button_back->setObjectName(QString::fromUtf8("Button_back"));
        Button_back->setGeometry(QRect(10, 480, 451, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        Button_back->setFont(font1);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 451, 31));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 10, 551, 531));
        label->setPixmap(QPixmap(QString::fromUtf8("/home/jetson/kulla_qt_ws/src/take_one/resource/final_map.jpeg")));
        take_one->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(take_one);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 31));
        take_one->setMenuBar(menuBar);
        mainToolBar = new QToolBar(take_one);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        take_one->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(take_one);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        take_one->setStatusBar(statusBar);

        retranslateUi(take_one);

        QMetaObject::connectSlotsByName(take_one);
    } // setupUi

    void retranslateUi(QMainWindow *take_one)
    {
        take_one->setWindowTitle(QApplication::translate("take_one", "take_one", 0, QApplication::UnicodeUTF8));
        Button_rec->setText(QApplication::translate("take_one", "Received", 0, QApplication::UnicodeUTF8));
        Button_unlock1->setText(QApplication::translate("take_one", "Unlock", 0, QApplication::UnicodeUTF8));
        Button_lock1->setText(QApplication::translate("take_one", "Lock", 0, QApplication::UnicodeUTF8));
        Button_back->setText(QApplication::translate("take_one", "back", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("take_one", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:18pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">First Receiver</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:400;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class take_one: public Ui_take_one {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKE_ONE_H
