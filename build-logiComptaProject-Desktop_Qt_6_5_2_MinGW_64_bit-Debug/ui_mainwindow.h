/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *loginFrame;
    QGridLayout *gridLayout_2;
    QFrame *centerFrame;
    QGroupBox *groupBox;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *LoginButton;
    QPushButton *CancelButton;
    QMenuBar *menubar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(843, 660);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-image: url(:/res/6106991.jpg);\n"
"}\n"
"\n"
"#centerFrame{\n"
"	max-width:  500px;\n"
"	margin: 0 auto;\n"
"}\n"
"\n"
"#Bienlabel{\n"
"	color: #ffffff;\n"
"  	text-align: center;\n"
"  	font: 700 16px \"Inter\", sans-serif;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	background: #ffffff;\n"
"  	border-radius: 34px;\n"
"  	position: relative;\n"
"  	transform-origin: 0 0;\n"
"  	transform: rotate(0deg) scale(1, 1);\n"
"	padding-left : 10px;\n"
" 	 height: 138px;\n"
"}\n"
"\n"
"QPushButton  {\n"
"	color: rgb(0, 0, 0);\n"
"	border:  1px solid rgb(114, 114, 114);\n"
"	background-color: rgb(217, 217, 217);\n"
"	width : 100px;\n"
"}\n"
"\n"
"#CancelButton{\n"
"	max-width: 100px\n"
"}\n"
""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        loginFrame = new QFrame(centralwidget);
        loginFrame->setObjectName("loginFrame");
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(loginFrame);
        gridLayout_2->setObjectName("gridLayout_2");
        centerFrame = new QFrame(loginFrame);
        centerFrame->setObjectName("centerFrame");
        centerFrame->setFrameShape(QFrame::StyledPanel);
        centerFrame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(centerFrame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 310, 351, 231));
        usernameInput = new QLineEdit(groupBox);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(40, 40, 271, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(13);
        usernameInput->setFont(font);
        usernameInput->setStyleSheet(QString::fromUtf8(""));
        passwordInput = new QLineEdit(groupBox);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(40, 110, 271, 41));
        passwordInput->setFont(font);
        passwordInput->setStyleSheet(QString::fromUtf8(""));
        LoginButton = new QPushButton(groupBox);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(60, 170, 102, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(12);
        font1.setBold(true);
        LoginButton->setFont(font1);
        LoginButton->setStyleSheet(QString::fromUtf8(""));
        CancelButton = new QPushButton(groupBox);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setGeometry(QRect(190, 170, 102, 41));
        CancelButton->setFont(font1);
        CancelButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(centerFrame, 0, 0, 1, 1);


        gridLayout->addWidget(loginFrame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 843, 21));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName("toolBar_3");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Bienvenue sur LogiCompta", nullptr));
        usernameInput->setText(QCoreApplication::translate("MainWindow", "User Name : ", nullptr));
        passwordInput->setText(QCoreApplication::translate("MainWindow", "Password : ", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        CancelButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
