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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *topframe;
    QVBoxLayout *verticalLayout_2;
    QLabel *bienlabel;
    QLineEdit *usernameInput;
    QFrame *passwordframe;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *passwordInput;
    QFrame *loginframe;
    QHBoxLayout *horizontalLayout;
    QPushButton *loginbutton;
    QPushButton *cancelbutton;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(843, 660);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
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
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        topframe = new QFrame(centralwidget);
        topframe->setObjectName("topframe");
        topframe->setMinimumSize(QSize(300, 100));
        topframe->setMaximumSize(QSize(230, 300));
        topframe->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding : 5px;\n"
"}"));
        topframe->setFrameShape(QFrame::StyledPanel);
        topframe->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(topframe);
        verticalLayout_2->setObjectName("verticalLayout_2");
        bienlabel = new QLabel(topframe);
        bienlabel->setObjectName("bienlabel");
        bienlabel->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(14);
        font.setBold(true);
        bienlabel->setFont(font);
        bienlabel->setLayoutDirection(Qt::LeftToRight);
        bienlabel->setStyleSheet(QString::fromUtf8(""));
        bienlabel->setMargin(35);

        verticalLayout_2->addWidget(bienlabel);

        usernameInput = new QLineEdit(topframe);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setMinimumSize(QSize(280, 40));
        usernameInput->setMaximumSize(QSize(210, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(11);
        usernameInput->setFont(font1);
        usernameInput->setMaxLength(30);
        usernameInput->setFrame(true);
        usernameInput->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(usernameInput);


        verticalLayout->addWidget(topframe, 0, Qt::AlignHCenter|Qt::AlignBottom);

        passwordframe = new QFrame(centralwidget);
        passwordframe->setObjectName("passwordframe");
        passwordframe->setMinimumSize(QSize(300, 70));
        passwordframe->setMaximumSize(QSize(230, 300));
        passwordframe->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        passwordframe->setFrameShape(QFrame::StyledPanel);
        passwordframe->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(passwordframe);
        verticalLayout_3->setObjectName("verticalLayout_3");
        passwordInput = new QLineEdit(passwordframe);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setMinimumSize(QSize(280, 40));
        passwordInput->setMaximumSize(QSize(210, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(12);
        passwordInput->setFont(font2);
        passwordInput->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(passwordInput);

        loginframe = new QFrame(passwordframe);
        loginframe->setObjectName("loginframe");
        loginframe->setMinimumSize(QSize(280, 70));
        loginframe->setMaximumSize(QSize(230, 70));
        loginframe->setFrameShape(QFrame::StyledPanel);
        loginframe->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(loginframe);
        horizontalLayout->setObjectName("horizontalLayout");
        loginbutton = new QPushButton(loginframe);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setMinimumSize(QSize(100, 20));
        loginbutton->setMaximumSize(QSize(80, 40));

        horizontalLayout->addWidget(loginbutton);

        cancelbutton = new QPushButton(loginframe);
        cancelbutton->setObjectName("cancelbutton");
        cancelbutton->setMinimumSize(QSize(100, 20));
        cancelbutton->setMaximumSize(QSize(80, 40));

        horizontalLayout->addWidget(cancelbutton);


        verticalLayout_3->addWidget(loginframe);


        verticalLayout->addWidget(passwordframe, 0, Qt::AlignHCenter|Qt::AlignTop);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 843, 21));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bienlabel->setText(QCoreApplication::translate("MainWindow", "Bienvenue sur LogiCompta", nullptr));
        usernameInput->setInputMask(QString());
        usernameInput->setText(QString());
        passwordInput->setText(QString());
        loginbutton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        cancelbutton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
