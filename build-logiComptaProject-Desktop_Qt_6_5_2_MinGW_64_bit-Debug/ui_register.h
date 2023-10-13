/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1180, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family : Calibri;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-image: url(:/res/6106991.jpg);\n"
"}\n"
"\n"
"QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	text-align: center;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color: #fff;\n"
"	border-radius: 12px;\n"
"}"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(380, 130, 270, 300));
        frame->setMinimumSize(QSize(270, 300));
        frame->setMaximumSize(QSize(270, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(250, 25));
        lineEdit->setMaximumSize(QSize(250, 25));

        verticalLayout->addWidget(lineEdit);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(250, 25));
        lineEdit_4->setMaximumSize(QSize(250, 25));

        verticalLayout->addWidget(lineEdit_4);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(250, 25));
        lineEdit_2->setMaximumSize(QSize(250, 25));

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(250, 25));
        lineEdit_3->setMaximumSize(QSize(250, 25));

        verticalLayout->addWidget(lineEdit_3);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(frame_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1180, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "User name * ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Your Email *", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password *  ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Confirm password *", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
