/********************************************************************************
** Form generated from reading UI file 'admin_ui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_UI_H
#define UI_ADMIN_UI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_ui
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_pw;
    QLabel *label_mode;
    QLineEdit *mode_status;
    QLineEdit *pw_status;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_mode2;
    QPushButton *Button_give;
    QPushButton *Button_take;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *Button_rm;
    QPushButton *Button_0;
    QPushButton *Button_5;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_7;
    QPushButton *Button_6;
    QPushButton *Button_1;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_4;
    QPushButton *Button_Ent;
    QLabel *label_pw2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *admin_ui)
    {
        if (admin_ui->objectName().isEmpty())
            admin_ui->setObjectName(QString::fromUtf8("admin_ui"));
        admin_ui->resize(1024, 600);
        centralWidget = new QWidget(admin_ui);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 421, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_pw = new QLabel(gridLayoutWidget);
        label_pw->setObjectName(QString::fromUtf8("label_pw"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_pw->setFont(font);

        gridLayout->addWidget(label_pw, 1, 0, 1, 1);

        label_mode = new QLabel(gridLayoutWidget);
        label_mode->setObjectName(QString::fromUtf8("label_mode"));
        label_mode->setFont(font);
        label_mode->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_mode, 0, 0, 1, 1);

        mode_status = new QLineEdit(gridLayoutWidget);
        mode_status->setObjectName(QString::fromUtf8("mode_status"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mode_status->sizePolicy().hasHeightForWidth());
        mode_status->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mode_status, 0, 1, 1, 1);

        pw_status = new QLineEdit(gridLayoutWidget);
        pw_status->setObjectName(QString::fromUtf8("pw_status"));
        sizePolicy.setHeightForWidth(pw_status->sizePolicy().hasHeightForWidth());
        pw_status->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pw_status, 1, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 180, 421, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_mode2 = new QLabel(verticalLayoutWidget);
        label_mode2->setObjectName(QString::fromUtf8("label_mode2"));
        label_mode2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";\n"
"font: 75 11pt \"Ubuntu\";"));

        verticalLayout->addWidget(label_mode2);

        Button_give = new QPushButton(verticalLayoutWidget);
        Button_give->setObjectName(QString::fromUtf8("Button_give"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_give->sizePolicy().hasHeightForWidth());
        Button_give->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font1.setPointSize(48);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        Button_give->setFont(font1);
        Button_give->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Ubuntu Mono\";\n"
"font: 75 48pt \"Ubuntu Mono\";"));

        verticalLayout->addWidget(Button_give);

        Button_take = new QPushButton(verticalLayoutWidget);
        Button_take->setObjectName(QString::fromUtf8("Button_take"));
        sizePolicy1.setHeightForWidth(Button_take->sizePolicy().hasHeightForWidth());
        Button_take->setSizePolicy(sizePolicy1);
        Button_take->setFont(font1);
        Button_take->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Ubuntu Mono\";\n"
"font: 75 48pt \"Ubuntu Mono\";"));

        verticalLayout->addWidget(Button_take);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(440, 0, 581, 531));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Button_rm = new QPushButton(layoutWidget);
        Button_rm->setObjectName(QString::fromUtf8("Button_rm"));
        sizePolicy1.setHeightForWidth(Button_rm->sizePolicy().hasHeightForWidth());
        Button_rm->setSizePolicy(sizePolicy1);
        Button_rm->setMaximumSize(QSize(16777215, 16777215));
        Button_rm->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_rm, 5, 0, 1, 1);

        Button_0 = new QPushButton(layoutWidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        sizePolicy1.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy1);
        Button_0->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font2.setPointSize(27);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        Button_0->setFont(font2);
        Button_0->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_0, 5, 1, 1, 1);

        Button_5 = new QPushButton(layoutWidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        sizePolicy1.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy1);
        Button_5->setMaximumSize(QSize(16777215, 16777215));
        Button_5->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_5, 2, 1, 1, 1);

        Button_2 = new QPushButton(layoutWidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        sizePolicy1.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy1);
        Button_2->setMaximumSize(QSize(16777215, 16777215));
        Button_2->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_2, 1, 1, 1, 1);

        Button_3 = new QPushButton(layoutWidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        sizePolicy1.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy1);
        Button_3->setMaximumSize(QSize(16777215, 16777215));
        Button_3->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_3, 1, 2, 1, 1);

        Button_7 = new QPushButton(layoutWidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        sizePolicy1.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy1);
        Button_7->setMaximumSize(QSize(16777215, 16777215));
        Button_7->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_7, 4, 0, 1, 1);

        Button_6 = new QPushButton(layoutWidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        sizePolicy1.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy1);
        Button_6->setMaximumSize(QSize(16777215, 16777215));
        Button_6->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_6, 2, 2, 1, 1);

        Button_1 = new QPushButton(layoutWidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        sizePolicy1.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy1);
        Button_1->setMaximumSize(QSize(16777215, 16777215));
        Button_1->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_1, 1, 0, 1, 1);

        Button_8 = new QPushButton(layoutWidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        sizePolicy1.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy1);
        Button_8->setMaximumSize(QSize(16777215, 16777215));
        Button_8->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_8, 4, 1, 1, 1);

        Button_9 = new QPushButton(layoutWidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        sizePolicy1.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy1);
        Button_9->setMaximumSize(QSize(16777215, 16777215));
        Button_9->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_9, 4, 2, 1, 1);

        Button_4 = new QPushButton(layoutWidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        sizePolicy1.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy1);
        Button_4->setMaximumSize(QSize(16777215, 16777215));
        Button_4->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_4, 2, 0, 1, 1);

        Button_Ent = new QPushButton(layoutWidget);
        Button_Ent->setObjectName(QString::fromUtf8("Button_Ent"));
        sizePolicy1.setHeightForWidth(Button_Ent->sizePolicy().hasHeightForWidth());
        Button_Ent->setSizePolicy(sizePolicy1);
        Button_Ent->setMaximumSize(QSize(16777215, 16777215));
        Button_Ent->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font: 75 20pt \"Ubuntu Condensed\";\n"
"font: 75 27pt \"Ubuntu Mono\";"));

        gridLayout_2->addWidget(Button_Ent, 5, 2, 1, 1);

        label_pw2 = new QLabel(layoutWidget);
        label_pw2->setObjectName(QString::fromUtf8("label_pw2"));
        label_pw2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Ubuntu\";"));

        gridLayout_2->addWidget(label_pw2, 0, 0, 1, 3);

        admin_ui->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(admin_ui);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 31));
        admin_ui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(admin_ui);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        admin_ui->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(admin_ui);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        admin_ui->setStatusBar(statusBar);

        retranslateUi(admin_ui);

        QMetaObject::connectSlotsByName(admin_ui);
    } // setupUi

    void retranslateUi(QMainWindow *admin_ui)
    {
        admin_ui->setWindowTitle(QApplication::translate("admin_ui", "admin_ui", 0, QApplication::UnicodeUTF8));
        label_pw->setText(QApplication::translate("admin_ui", "Password", 0, QApplication::UnicodeUTF8));
        label_mode->setText(QApplication::translate("admin_ui", "Mode", 0, QApplication::UnicodeUTF8));
        label_mode2->setText(QApplication::translate("admin_ui", "Mode", 0, QApplication::UnicodeUTF8));
        Button_give->setText(QApplication::translate("admin_ui", "Give", 0, QApplication::UnicodeUTF8));
        Button_take->setText(QApplication::translate("admin_ui", "Take", 0, QApplication::UnicodeUTF8));
        Button_rm->setText(QApplication::translate("admin_ui", "C", 0, QApplication::UnicodeUTF8));
        Button_0->setText(QApplication::translate("admin_ui", "0", 0, QApplication::UnicodeUTF8));
        Button_5->setText(QApplication::translate("admin_ui", "5", 0, QApplication::UnicodeUTF8));
        Button_2->setText(QApplication::translate("admin_ui", "2", 0, QApplication::UnicodeUTF8));
        Button_3->setText(QApplication::translate("admin_ui", "3", 0, QApplication::UnicodeUTF8));
        Button_7->setText(QApplication::translate("admin_ui", "7", 0, QApplication::UnicodeUTF8));
        Button_6->setText(QApplication::translate("admin_ui", "6", 0, QApplication::UnicodeUTF8));
        Button_1->setText(QApplication::translate("admin_ui", "1", 0, QApplication::UnicodeUTF8));
        Button_8->setText(QApplication::translate("admin_ui", "8", 0, QApplication::UnicodeUTF8));
        Button_9->setText(QApplication::translate("admin_ui", "9", 0, QApplication::UnicodeUTF8));
        Button_4->setText(QApplication::translate("admin_ui", "4", 0, QApplication::UnicodeUTF8));
        Button_Ent->setText(QApplication::translate("admin_ui", "Enter", 0, QApplication::UnicodeUTF8));
        label_pw2->setText(QApplication::translate("admin_ui", "Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class admin_ui: public Ui_admin_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_UI_H
