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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *centralframe;
    QHBoxLayout *horizontalLayout;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout;
    QFrame *topFrame;
    QListWidget *logoWidget;
    QLabel *welcomeLabel;
    QPushButton *pushButton;
    QFrame *bottomFrame;
    QLineEdit *counter;
    QFrame *rightFrame;
    QVBoxLayout *verticalLayout_3;
    QFrame *topRightFrame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *firstRightFrame;
    QPushButton *invoiceButton;
    QLabel *invoiceLabel;
    QFrame *secondRightFrame;
    QPushButton *addSectionButton;
    QLabel *addSectionLabel;
    QFrame *thirdRightFrame;
    QPushButton *ProfilpushButton;
    QLabel *profilLabel;
    QFrame *bottomRightFrame;
    QHBoxLayout *horizontalLayout_3;
    QFrame *fourthRightFrame;
    QPushButton *listInvoicesPushButton;
    QLabel *listInvoicesLabel;
    QFrame *fifthRightFrame;
    QPushButton *listSectionsPushButton;
    QLabel *listSectionsLabel;
    QFrame *sixRightFrame;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(1171, 720);
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-image: url(:/res/6106992.jpg);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        centralframe = new QFrame(centralwidget);
        centralframe->setObjectName("centralframe");
        centralframe->setMinimumSize(QSize(100, 100));
        centralframe->setMaximumSize(QSize(16777215, 10000000));
        centralframe->setFrameShape(QFrame::StyledPanel);
        centralframe->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(centralframe);
        horizontalLayout->setObjectName("horizontalLayout");
        leftFrame = new QFrame(centralframe);
        leftFrame->setObjectName("leftFrame");
        leftFrame->setMaximumSize(QSize(312, 1712));
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(leftFrame);
        verticalLayout->setObjectName("verticalLayout");
        topFrame = new QFrame(leftFrame);
        topFrame->setObjectName("topFrame");
        topFrame->setFrameShape(QFrame::StyledPanel);
        topFrame->setFrameShadow(QFrame::Raised);
        logoWidget = new QListWidget(topFrame);
        logoWidget->setObjectName("logoWidget");
        logoWidget->setGeometry(QRect(0, 10, 281, 192));
        logoWidget->setStyleSheet(QString::fromUtf8("#logoWidget{\n"
"	background: url(:/res/logo1.png) no-repeat center center fixed;\n"
"	background-size : cover;\n"
"}"));
        welcomeLabel = new QLabel(topFrame);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(10, 210, 271, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(16);
        font.setBold(true);
        welcomeLabel->setFont(font);
        welcomeLabel->setLayoutDirection(Qt::LeftToRight);
        welcomeLabel->setStyleSheet(QString::fromUtf8("#welcomeLabel {\n"
"	color: rgb(0, 0, 127);	\n"
"}\n"
""));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(topFrame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 240, 80, 24));
        QFont font1;
        font1.setPointSize(9);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: transparent;\n"
"	color: rgb(120, 120, 120);\n"
"	background : none;\n"
"	border: none;\n"
"}"));

        verticalLayout->addWidget(topFrame);

        bottomFrame = new QFrame(leftFrame);
        bottomFrame->setObjectName("bottomFrame");
        bottomFrame->setMinimumSize(QSize(0, 82));
        bottomFrame->setFrameShape(QFrame::StyledPanel);
        bottomFrame->setFrameShadow(QFrame::Raised);
        counter = new QLineEdit(bottomFrame);
        counter->setObjectName("counter");
        counter->setGeometry(QRect(10, 10, 271, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(18);
        counter->setFont(font2);
        counter->setStyleSheet(QString::fromUtf8("#counter {\n"
"	color: #000;\n"
"	padding-right : 5px;\n"
"}"));
        counter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(bottomFrame, 0, Qt::AlignBottom);


        horizontalLayout->addWidget(leftFrame);

        rightFrame = new QFrame(centralframe);
        rightFrame->setObjectName("rightFrame");
        rightFrame->setFrameShape(QFrame::StyledPanel);
        rightFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(rightFrame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        topRightFrame = new QFrame(rightFrame);
        topRightFrame->setObjectName("topRightFrame");
        topRightFrame->setFrameShape(QFrame::StyledPanel);
        topRightFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(topRightFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        firstRightFrame = new QFrame(topRightFrame);
        firstRightFrame->setObjectName("firstRightFrame");
        firstRightFrame->setFrameShape(QFrame::StyledPanel);
        firstRightFrame->setFrameShadow(QFrame::Raised);
        invoiceButton = new QPushButton(firstRightFrame);
        invoiceButton->setObjectName("invoiceButton");
        invoiceButton->setGeometry(QRect(30, 20, 191, 191));
        invoiceButton->setStyleSheet(QString::fromUtf8("#invoiceButton{\n"
"	background-color: transparent;\n"
"	border-image: url(:/res/money.png) center;\n"
"	background : none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        invoiceLabel = new QLabel(firstRightFrame);
        invoiceLabel->setObjectName("invoiceLabel");
        invoiceLabel->setGeometry(QRect(50, 200, 151, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(16);
        invoiceLabel->setFont(font3);
        invoiceLabel->setStyleSheet(QString::fromUtf8("#invoiceLabel {\n"
"	color: #fff;\n"
"}\n"
"\n"
"#invoiceLabel:hover {\n"
"	color: #000;\n"
"}"));
        invoiceLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(firstRightFrame);

        secondRightFrame = new QFrame(topRightFrame);
        secondRightFrame->setObjectName("secondRightFrame");
        secondRightFrame->setFrameShape(QFrame::StyledPanel);
        secondRightFrame->setFrameShadow(QFrame::Raised);
        addSectionButton = new QPushButton(secondRightFrame);
        addSectionButton->setObjectName("addSectionButton");
        addSectionButton->setGeometry(QRect(60, 30, 131, 141));
        addSectionButton->setStyleSheet(QString::fromUtf8("#addSectionButton{\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	border-image: url(:/res/plus.png);\n"
"	background-repeat: none;\n"
"}"));
        addSectionLabel = new QLabel(secondRightFrame);
        addSectionLabel->setObjectName("addSectionLabel");
        addSectionLabel->setGeometry(QRect(50, 200, 151, 20));
        addSectionLabel->setFont(font3);
        addSectionLabel->setStyleSheet(QString::fromUtf8("#addSectionLabel {\n"
"	color: #fff;\n"
"}\n"
"\n"
"#addSectionLabel:hover {\n"
"	color: #000;\n"
"}"));
        addSectionLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(secondRightFrame);

        thirdRightFrame = new QFrame(topRightFrame);
        thirdRightFrame->setObjectName("thirdRightFrame");
        thirdRightFrame->setFrameShape(QFrame::StyledPanel);
        thirdRightFrame->setFrameShadow(QFrame::Raised);
        ProfilpushButton = new QPushButton(thirdRightFrame);
        ProfilpushButton->setObjectName("ProfilpushButton");
        ProfilpushButton->setGeometry(QRect(60, 40, 141, 141));
        ProfilpushButton->setStyleSheet(QString::fromUtf8("#ProfilpushButton{\n"
"	background-color: transparent;\n"
"	border-image: url(:/res/user.png);\n"
"	background : none;\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        profilLabel = new QLabel(thirdRightFrame);
        profilLabel->setObjectName("profilLabel");
        profilLabel->setGeometry(QRect(60, 200, 151, 20));
        profilLabel->setFont(font3);
        profilLabel->setStyleSheet(QString::fromUtf8("#profilLabel{\n"
"	color: #fff;\n"
"}\n"
"\n"
"#profilLabel:hover {\n"
"	color: #000;\n"
"}"));
        profilLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(thirdRightFrame);


        verticalLayout_3->addWidget(topRightFrame);

        bottomRightFrame = new QFrame(rightFrame);
        bottomRightFrame->setObjectName("bottomRightFrame");
        bottomRightFrame->setFrameShape(QFrame::StyledPanel);
        bottomRightFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(bottomRightFrame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        fourthRightFrame = new QFrame(bottomRightFrame);
        fourthRightFrame->setObjectName("fourthRightFrame");
        fourthRightFrame->setFrameShape(QFrame::StyledPanel);
        fourthRightFrame->setFrameShadow(QFrame::Raised);
        listInvoicesPushButton = new QPushButton(fourthRightFrame);
        listInvoicesPushButton->setObjectName("listInvoicesPushButton");
        listInvoicesPushButton->setGeometry(QRect(50, 30, 151, 151));
        listInvoicesPushButton->setStyleSheet(QString::fromUtf8("#listInvoicesPushButton {\n"
"	background-color: transparent;\n"
"	background : none;\n"
"	border-image: url(:/res/li.png);\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        listInvoicesLabel = new QLabel(fourthRightFrame);
        listInvoicesLabel->setObjectName("listInvoicesLabel");
        listInvoicesLabel->setGeometry(QRect(50, 190, 151, 20));
        listInvoicesLabel->setFont(font3);
        listInvoicesLabel->setStyleSheet(QString::fromUtf8("#listInvoicesLabel {\n"
"	color: #fff;\n"
"}\n"
"\n"
"#listInvoicesLabel:hover {\n"
"	color: #000;\n"
"}"));
        listInvoicesLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(fourthRightFrame);

        fifthRightFrame = new QFrame(bottomRightFrame);
        fifthRightFrame->setObjectName("fifthRightFrame");
        fifthRightFrame->setFrameShape(QFrame::StyledPanel);
        fifthRightFrame->setFrameShadow(QFrame::Raised);
        listSectionsPushButton = new QPushButton(fifthRightFrame);
        listSectionsPushButton->setObjectName("listSectionsPushButton");
        listSectionsPushButton->setGeometry(QRect(20, 30, 201, 171));
        listSectionsPushButton->setStyleSheet(QString::fromUtf8("#listSectionsPushButton{\n"
"	background-color: transparent;\n"
"	background : none;\n"
"	\n"
"	border-image: url(:/res/rubriques.png);\n"
"	border: none;\n"
"	background-repeat: none;\n"
"}"));
        listSectionsLabel = new QLabel(fifthRightFrame);
        listSectionsLabel->setObjectName("listSectionsLabel");
        listSectionsLabel->setGeometry(QRect(50, 190, 161, 20));
        listSectionsLabel->setFont(font3);
        listSectionsLabel->setStyleSheet(QString::fromUtf8("#listSectionsLabel {\n"
"	color: #fff;\n"
"}\n"
"\n"
"#listSectionsLabel:hover {\n"
"	color: #000;\n"
"}"));
        listSectionsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(fifthRightFrame);

        sixRightFrame = new QFrame(bottomRightFrame);
        sixRightFrame->setObjectName("sixRightFrame");
        sixRightFrame->setFrameShape(QFrame::StyledPanel);
        sixRightFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(sixRightFrame);


        verticalLayout_3->addWidget(bottomRightFrame);


        horizontalLayout->addWidget(rightFrame);


        verticalLayout_2->addWidget(centralframe);

        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1171, 21));
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
        welcomeLabel->setText(QCoreApplication::translate("MainPage", "Welcome to LogiCompta", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage", "who are us ?", nullptr));
        invoiceButton->setText(QString());
        invoiceLabel->setText(QCoreApplication::translate("MainPage", "add a invoice", nullptr));
        addSectionButton->setText(QString());
        addSectionLabel->setText(QCoreApplication::translate("MainPage", "add a section", nullptr));
        ProfilpushButton->setText(QString());
        profilLabel->setText(QCoreApplication::translate("MainPage", "Profil", nullptr));
        listInvoicesPushButton->setText(QString());
        listInvoicesLabel->setText(QCoreApplication::translate("MainPage", "list of all invoices", nullptr));
        listSectionsPushButton->setText(QString());
        listSectionsLabel->setText(QCoreApplication::translate("MainPage", "list of all sections", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainPage", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
