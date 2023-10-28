/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *registrationFormFrame;
    QVBoxLayout *verticalLayout;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *confirmPassLabel;
    QLineEdit *confirmPassLineEdit;
    QFrame *confirmFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *CancelButton;
    QPushButton *confirmButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName("Registration");
        Registration->resize(804, 659);
        centralwidget = new QWidget(Registration);
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
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        registrationFormFrame = new QFrame(centralwidget);
        registrationFormFrame->setObjectName("registrationFormFrame");
        registrationFormFrame->setMinimumSize(QSize(270, 300));
        registrationFormFrame->setMaximumSize(QSize(270, 400));
        registrationFormFrame->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family : Calibri;\n"
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
"	padding : 5px;\n"
"}"));
        registrationFormFrame->setFrameShape(QFrame::StyledPanel);
        registrationFormFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(registrationFormFrame);
        verticalLayout->setObjectName("verticalLayout");
        userNameLabel = new QLabel(registrationFormFrame);
        userNameLabel->setObjectName("userNameLabel");
        userNameLabel->setMaximumSize(QSize(250, 20));

        verticalLayout->addWidget(userNameLabel);

        userNameLineEdit = new QLineEdit(registrationFormFrame);
        userNameLineEdit->setObjectName("userNameLineEdit");
        userNameLineEdit->setMinimumSize(QSize(250, 25));
        userNameLineEdit->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(userNameLineEdit);

        emailLabel = new QLabel(registrationFormFrame);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setMaximumSize(QSize(250, 20));

        verticalLayout->addWidget(emailLabel);

        emailLineEdit = new QLineEdit(registrationFormFrame);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setMinimumSize(QSize(250, 25));
        emailLineEdit->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(emailLineEdit);

        passwordLabel = new QLabel(registrationFormFrame);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setMaximumSize(QSize(250, 20));

        verticalLayout->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(registrationFormFrame);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setMinimumSize(QSize(250, 25));
        passwordLineEdit->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(passwordLineEdit);

        confirmPassLabel = new QLabel(registrationFormFrame);
        confirmPassLabel->setObjectName("confirmPassLabel");
        confirmPassLabel->setMaximumSize(QSize(250, 20));

        verticalLayout->addWidget(confirmPassLabel);

        confirmPassLineEdit = new QLineEdit(registrationFormFrame);
        confirmPassLineEdit->setObjectName("confirmPassLineEdit");
        confirmPassLineEdit->setMinimumSize(QSize(250, 25));
        confirmPassLineEdit->setMaximumSize(QSize(250, 40));

        verticalLayout->addWidget(confirmPassLineEdit);

        confirmFrame = new QFrame(registrationFormFrame);
        confirmFrame->setObjectName("confirmFrame");
        confirmFrame->setMaximumSize(QSize(16777215, 70));
        confirmFrame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid #727272;\n"
"	background-color: #D9D9D9;\n"
"	color : #000;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #727272;\n"
"	color: #fff;\n"
"	border: 2px solid #D9D9D9;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	padding : 5px;\n"
"}"));
        confirmFrame->setFrameShape(QFrame::StyledPanel);
        confirmFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(confirmFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        CancelButton = new QPushButton(confirmFrame);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(CancelButton);

        confirmButton = new QPushButton(confirmFrame);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addWidget(confirmFrame);


        verticalLayout_2->addWidget(registrationFormFrame, 0, Qt::AlignHCenter);

        Registration->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Registration);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 804, 21));
        Registration->setMenuBar(menubar);
        statusbar = new QStatusBar(Registration);
        statusbar->setObjectName("statusbar");
        Registration->setStatusBar(statusbar);
        toolBar = new QToolBar(Registration);
        toolBar->setObjectName("toolBar");
        Registration->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(Registration);
        toolBar_2->setObjectName("toolBar_2");
        Registration->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QMainWindow *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "MainWindow", nullptr));
        userNameLabel->setText(QCoreApplication::translate("Registration", "User name * ", nullptr));
        emailLabel->setText(QCoreApplication::translate("Registration", "Your Email *", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Registration", "password *  ", nullptr));
        confirmPassLabel->setText(QCoreApplication::translate("Registration", "Confirm password *", nullptr));
        CancelButton->setText(QCoreApplication::translate("Registration", "Cancel", nullptr));
        confirmButton->setText(QCoreApplication::translate("Registration", "Confirm", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Registration", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("Registration", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
