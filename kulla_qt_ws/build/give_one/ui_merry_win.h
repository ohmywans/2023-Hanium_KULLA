/********************************************************************************
** Form generated from reading UI file 'merry_win.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERRY_WIN_H
#define UI_MERRY_WIN_H

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

class Ui_merry_win
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *Button_p1;
    QPushButton *Button_p3;
    QPushButton *Button_p2;
    QPushButton *Button_p4;
    QPushButton *Button_back;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *Button_unlock1;
    QPushButton *Button_lock1;
    QTextEdit *textEdit;
    QLabel *label;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *merry_win)
    {
        if (merry_win->objectName().isEmpty())
            merry_win->setObjectName(QString::fromUtf8("merry_win"));
        merry_win->resize(1024, 600);
        centralWidget = new QWidget(merry_win);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(12, 199, 451, 341));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Button_p1 = new QPushButton(gridLayoutWidget);
        Button_p1->setObjectName(QString::fromUtf8("Button_p1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_p1->sizePolicy().hasHeightForWidth());
        Button_p1->setSizePolicy(sizePolicy);
        Button_p1->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p1, 0, 0, 1, 1);

        Button_p3 = new QPushButton(gridLayoutWidget);
        Button_p3->setObjectName(QString::fromUtf8("Button_p3"));
        sizePolicy.setHeightForWidth(Button_p3->sizePolicy().hasHeightForWidth());
        Button_p3->setSizePolicy(sizePolicy);
        Button_p3->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p3, 1, 0, 1, 1);

        Button_p2 = new QPushButton(gridLayoutWidget);
        Button_p2->setObjectName(QString::fromUtf8("Button_p2"));
        sizePolicy.setHeightForWidth(Button_p2->sizePolicy().hasHeightForWidth());
        Button_p2->setSizePolicy(sizePolicy);
        Button_p2->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p2, 0, 1, 1, 1);

        Button_p4 = new QPushButton(gridLayoutWidget);
        Button_p4->setObjectName(QString::fromUtf8("Button_p4"));
        sizePolicy.setHeightForWidth(Button_p4->sizePolicy().hasHeightForWidth());
        Button_p4->setSizePolicy(sizePolicy);
        Button_p4->setStyleSheet(QString::fromUtf8("font: 75 30pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_p4, 1, 1, 1, 1);

        Button_back = new QPushButton(gridLayoutWidget);
        Button_back->setObjectName(QString::fromUtf8("Button_back"));

        gridLayout_2->addWidget(Button_back, 2, 0, 1, 2);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(12, 49, 451, 141));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button_unlock1 = new QPushButton(gridLayoutWidget_2);
        Button_unlock1->setObjectName(QString::fromUtf8("Button_unlock1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_unlock1->sizePolicy().hasHeightForWidth());
        Button_unlock1->setSizePolicy(sizePolicy1);
        Button_unlock1->setMaximumSize(QSize(220, 16777215));
        Button_unlock1->setLayoutDirection(Qt::LeftToRight);
        Button_unlock1->setStyleSheet(QString::fromUtf8("font: Bold 28pt \"Ubuntu\";"));

        gridLayout->addWidget(Button_unlock1, 0, 0, 1, 1);

        Button_lock1 = new QPushButton(gridLayoutWidget_2);
        Button_lock1->setObjectName(QString::fromUtf8("Button_lock1"));
        sizePolicy1.setHeightForWidth(Button_lock1->sizePolicy().hasHeightForWidth());
        Button_lock1->setSizePolicy(sizePolicy1);
        Button_lock1->setMaximumSize(QSize(220, 16777215));
        Button_lock1->setLayoutDirection(Qt::LeftToRight);
        Button_lock1->setStyleSheet(QString::fromUtf8("font: Bold 28pt \"Ubuntu\";"));

        gridLayout->addWidget(Button_lock1, 0, 1, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 451, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 10, 551, 531));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/final_map.png")));
        merry_win->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(merry_win);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        merry_win->setStatusBar(statusBar);
        menuBar = new QMenuBar(merry_win);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 31));
        merry_win->setMenuBar(menuBar);

        retranslateUi(merry_win);

        QMetaObject::connectSlotsByName(merry_win);
    } // setupUi

    void retranslateUi(QMainWindow *merry_win)
    {
        merry_win->setWindowTitle(QApplication::translate("merry_win", "merry_win", 0, QApplication::UnicodeUTF8));
        Button_p1->setText(QApplication::translate("merry_win", "Point A", 0, QApplication::UnicodeUTF8));
        Button_p3->setText(QApplication::translate("merry_win", "Point C", 0, QApplication::UnicodeUTF8));
        Button_p2->setText(QApplication::translate("merry_win", "Point B", 0, QApplication::UnicodeUTF8));
        Button_p4->setText(QApplication::translate("merry_win", "Point D", 0, QApplication::UnicodeUTF8));
        Button_back->setText(QApplication::translate("merry_win", "Back", 0, QApplication::UnicodeUTF8));
        Button_unlock1->setText(QApplication::translate("merry_win", "Unlock", 0, QApplication::UnicodeUTF8));
        Button_lock1->setText(QApplication::translate("merry_win", "Lock", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("merry_win", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:18pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">First User</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:400;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class merry_win: public Ui_merry_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERRY_WIN_H
