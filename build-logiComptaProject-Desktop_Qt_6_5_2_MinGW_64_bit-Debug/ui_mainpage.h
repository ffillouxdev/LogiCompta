/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *counterLineEdit;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QTableWidget *tableWidget;
    QLabel *labellist;
    QFrame *frame_6;
    QPushButton *addFactButton;
    QLabel *labelfact;
    QFrame *frame_7;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *resetButton;
    QPushButton *discoButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(1028, 712);
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-image: url(:/res/6106991.jpg);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 80));
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        counterLineEdit = new QLineEdit(frame_2);
        counterLineEdit->setObjectName("counterLineEdit");
        counterLineEdit->setEnabled(false);
        counterLineEdit->setMinimumSize(QSize(270, 70));
        counterLineEdit->setMaximumSize(QSize(270, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(22);
        counterLineEdit->setFont(font);
        counterLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: #000;\n"
"	background-color: #fff;\n"
"	border : 2px solid #D2D2D2;\n"
"}"));
        counterLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(counterLineEdit);


        verticalLayout->addWidget(frame_2, 0, Qt::AlignRight);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(300, 450));
        frame_4->setMaximumSize(QSize(300, 450));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        tableWidget = new QTableWidget(frame_4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 281, 431));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	background-color : #fff;\n"
"	border : 2px solid #D2D2D2;\n"
"}"));
        labellist = new QLabel(frame_4);
        labellist->setObjectName("labellist");
        labellist->setGeometry(QRect(20, 20, 261, 20));
        QFont font1;
        font1.setPointSize(11);
        labellist->setFont(font1);
        labellist->setStyleSheet(QString::fromUtf8("#labellist{\n"
"	color: #000;\n"
"}"));
        labellist->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(frame_4);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(360, 450));
        frame_6->setMaximumSize(QSize(360, 450));
        QFont font2;
        font2.setPointSize(12);
        frame_6->setFont(font2);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        addFactButton = new QPushButton(frame_6);
        addFactButton->setObjectName("addFactButton");
        addFactButton->setGeometry(QRect(60, 150, 230, 60));
        addFactButton->setMinimumSize(QSize(230, 60));
        addFactButton->setMaximumSize(QSize(230, 60));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(12);
        font3.setBold(true);
        addFactButton->setFont(font3);
        addFactButton->setStyleSheet(QString::fromUtf8("#addFactButton{\n"
"	color: #fff;\n"
"	border : 1px solid #ff0000;\n"
"	background-color: qlineargradient(spread:pad, x1:0.042, y1:0.215909, x2:0, y2:1, stop:0 			rgba(255, 22, 49, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"#addFactButton:hover{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 0, 53, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    color: #ff0000;\n"
"    cursor: pointer;\n"
"}\n"
"	"));
        labelfact = new QLabel(frame_6);
        labelfact->setObjectName("labelfact");
        labelfact->setGeometry(QRect(60, 90, 230, 40));
        labelfact->setMinimumSize(QSize(230, 40));
        labelfact->setMaximumSize(QSize(230, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Calibri")});
        font4.setPointSize(14);
        font4.setBold(true);
        labelfact->setFont(font4);
        labelfact->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color : #fff;\n"
"}"));
        labelfact->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(frame_6);

        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(300, 450));
        frame_7->setMaximumSize(QSize(300, 450));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(frame_7);


        verticalLayout->addWidget(frame_3);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(400, 0));
        frame_5->setMaximumSize(QSize(16777215, 16777215));
        frame_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #fff;\n"
"	height : 40px;\n"
"	color: #000;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #000;\n"
"    color: #fff;\n"
"    cursor: pointer;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        resetButton = new QPushButton(frame_5);
        resetButton->setObjectName("resetButton");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Calibri")});
        font5.setPointSize(13);
        font5.setBold(true);
        resetButton->setFont(font5);
        resetButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(resetButton);

        discoButton = new QPushButton(frame_5);
        discoButton->setObjectName("discoButton");
        discoButton->setFont(font5);

        horizontalLayout_3->addWidget(discoButton);


        verticalLayout->addWidget(frame_5, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(frame);

        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1028, 21));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);
        toolBar = new QToolBar(MainPage);
        toolBar->setObjectName("toolBar");
        MainPage->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        counterLineEdit->setText(QCoreApplication::translate("MainPage", "0.0", nullptr));
        labellist->setText(QCoreApplication::translate("MainPage", " Liste de toutes les d\303\251penses", nullptr));
        addFactButton->setText(QCoreApplication::translate("MainPage", "ADD new value", nullptr));
        labelfact->setText(QCoreApplication::translate("MainPage", "Ajoutez une facture", nullptr));
        resetButton->setText(QCoreApplication::translate("MainPage", "Reset Values", nullptr));
        discoButton->setText(QCoreApplication::translate("MainPage", "Disconnect", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainPage", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
