/********************************************************************************
** Form generated from reading UI file 'give_two.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIVE_TWO_H
#define UI_GIVE_TWO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_give_two
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *Button_unlock1;
    QPushButton *Button_lock1;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *Button_p1;
    QPushButton *Button_p3;
    QPushButton *Button_p2;
    QPushButton *Button_p4;
    QPushButton *Button_back;
    QLabel *label;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *give_two)
    {
        if (give_two->objectName().isEmpty())
            give_two->setObjectName(QString::fromUtf8("give_two"));
        give_two->resize(1024, 600);
        centralWidget = new QWidget(give_two);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 451, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 50, 451, 141));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button_unlock1 = new QPushButton(gridLayoutWidget_2);
        Button_unlock1->setObjectName(QString::fromUtf8("Button_unlock1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_unlock1->sizePolicy().hasHeightForWidth());
        Button_unlock1->setSizePolicy(sizePolicy);
        Button_unlock1->setMaximumSize(QSize(220, 16777215));
        Button_unlock1->setLayoutDirection(Qt::LeftToRight);
        Button_unlock1->setStyleSheet(QString::fromUtf8("font: Bold 28pt \"Ubuntu\";"));

        gridLayout->addWidget(Button_unlock1, 0, 0, 1, 1);

        Button_lock1 = new QPushButton(gridLayoutWidget_2);
        Button_lock1->setObjectName(QString::fromUtf8("Button_lock1"));
        sizePolicy.setHeightForWidth(Button_lock1->sizePolicy().hasHeightForWidth());
        Button_lock1->setSizePolicy(sizePolicy);
        Button_lock1->setMaximumSize(QSize(220, 16777215));
        Button_lock1->setLayoutDirection(Qt::LeftToRight);
        Button_lock1->setStyleSheet(QString::fromUtf8("font: Bold 28pt \"Ubuntu\";"));

        gridLayout->addWidget(Button_lock1, 0, 1, 1, 1);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 200, 451, 341));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Button_p1 = new QPushButton(gridLayoutWidget);
        Button_p1->setObjectName(QString::fromUtf8("Button_p1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_p1->sizePolicy().hasHeightForWidth());
        Button_p1->setSizePolicy(sizePolicy1);
        Button_p1->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p1, 0, 0, 1, 1);

        Button_p3 = new QPushButton(gridLayoutWidget);
        Button_p3->setObjectName(QString::fromUtf8("Button_p3"));
        sizePolicy1.setHeightForWidth(Button_p3->sizePolicy().hasHeightForWidth());
        Button_p3->setSizePolicy(sizePolicy1);
        Button_p3->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p3, 1, 0, 1, 1);

        Button_p2 = new QPushButton(gridLayoutWidget);
        Button_p2->setObjectName(QString::fromUtf8("Button_p2"));
        sizePolicy1.setHeightForWidth(Button_p2->sizePolicy().hasHeightForWidth());
        Button_p2->setSizePolicy(sizePolicy1);
        Button_p2->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p2, 0, 1, 1, 1);

        Button_p4 = new QPushButton(gridLayoutWidget);
        Button_p4->setObjectName(QString::fromUtf8("Button_p4"));
        sizePolicy1.setHeightForWidth(Button_p4->sizePolicy().hasHeightForWidth());
        Button_p4->setSizePolicy(sizePolicy1);
        Button_p4->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p4, 1, 1, 1, 1);

        Button_back = new QPushButton(gridLayoutWidget);
        Button_back->setObjectName(QString::fromUtf8("Button_back"));

        gridLayout_2->addWidget(Button_back, 2, 0, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 10, 551, 531));
        label->setPixmap(QPixmap(QString::fromUtf8("/home/jetson/kulla_qt_ws/src/give_two/resource/final_map.jpeg")));
        give_two->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(give_two);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        give_two->setStatusBar(statusBar);
        menuBar = new QMenuBar(give_two);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 31));
        give_two->setMenuBar(menuBar);

        retranslateUi(give_two);

        QMetaObject::connectSlotsByName(give_two);
    } // setupUi

    void retranslateUi(QMainWindow *give_two)
    {
        give_two->setWindowTitle(QApplication::translate("give_two", "give_two", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("give_two", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:18pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Second User</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:400;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        Button_unlock1->setText(QApplication::translate("give_two", "Unlock", 0, QApplication::UnicodeUTF8));
        Button_lock1->setText(QApplication::translate("give_two", "Lock", 0, QApplication::UnicodeUTF8));
        Button_p1->setText(QApplication::translate("give_two", "Point A", 0, QApplication::UnicodeUTF8));
        Button_p3->setText(QApplication::translate("give_two", "Point C", 0, QApplication::UnicodeUTF8));
        Button_p2->setText(QApplication::translate("give_two", "Point B", 0, QApplication::UnicodeUTF8));
        Button_p4->setText(QApplication::translate("give_two", "Point D", 0, QApplication::UnicodeUTF8));
        Button_back->setText(QApplication::translate("give_two", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class give_two: public Ui_give_two {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIVE_TWO_H
