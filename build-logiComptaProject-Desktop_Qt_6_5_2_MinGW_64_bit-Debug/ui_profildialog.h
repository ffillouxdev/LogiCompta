/********************************************************************************
** Form generated from reading UI file 'profildialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILDIALOG_H
#define UI_PROFILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profilDialog
{
public:
    QPushButton *cancelButton;
    QPushButton *makeChangeButton;
    QPushButton *discoButton;
    QPushButton *resetButton;
    QLabel *happylabel;
    QLabel *hellolabel;
    QPushButton *changeInfoButton;
    QLabel *nameLabel;

    void setupUi(QDialog *profilDialog)
    {
        if (profilDialog->objectName().isEmpty())
            profilDialog->setObjectName("profilDialog");
        profilDialog->resize(331, 340);
        cancelButton = new QPushButton(profilDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(180, 250, 101, 31));
        QFont font;
        font.setBold(true);
        cancelButton->setFont(font);
        makeChangeButton = new QPushButton(profilDialog);
        makeChangeButton->setObjectName("makeChangeButton");
        makeChangeButton->setGeometry(QRect(40, 250, 111, 31));
        makeChangeButton->setFont(font);
        discoButton = new QPushButton(profilDialog);
        discoButton->setObjectName("discoButton");
        discoButton->setGeometry(QRect(130, 150, 80, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        discoButton->setFont(font1);
        discoButton->setStyleSheet(QString::fromUtf8("#discoButton {\n"
"	color :#000;\n"
"	background-color : transparent;\n"
"	background : none;\n"
"	border: none;\n"
"}"));
        resetButton = new QPushButton(profilDialog);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(130, 190, 80, 24));
        resetButton->setFont(font1);
        resetButton->setStyleSheet(QString::fromUtf8("#resetButton {\n"
"	color :#000;\n"
"	background-color : transparent;\n"
"	background : none;\n"
"	border: none;\n"
"}"));
        happylabel = new QLabel(profilDialog);
        happylabel->setObjectName("happylabel");
        happylabel->setGeometry(QRect(30, 40, 49, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(14);
        font2.setBold(false);
        happylabel->setFont(font2);
        hellolabel = new QLabel(profilDialog);
        hellolabel->setObjectName("hellolabel");
        hellolabel->setGeometry(QRect(160, 40, 161, 20));
        hellolabel->setFont(font2);
        changeInfoButton = new QPushButton(profilDialog);
        changeInfoButton->setObjectName("changeInfoButton");
        changeInfoButton->setGeometry(QRect(110, 110, 131, 24));
        changeInfoButton->setStyleSheet(QString::fromUtf8("#changeInfoButton {\n"
"	color :#000;\n"
"	background-color : transparent;\n"
"	background : none;\n"
"	border: none;\n"
"}"));
        nameLabel = new QLabel(profilDialog);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(80, 40, 81, 21));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        nameLabel->setFont(font3);
        nameLabel->setStyleSheet(QString::fromUtf8("#nameLabel {\n"
"	color: rgb(255, 0, 0);\n"
"}"));
        nameLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(profilDialog);

        QMetaObject::connectSlotsByName(profilDialog);
    } // setupUi

    void retranslateUi(QDialog *profilDialog)
    {
        profilDialog->setWindowTitle(QCoreApplication::translate("profilDialog", "Dialog", nullptr));
        cancelButton->setText(QCoreApplication::translate("profilDialog", "Cancel", nullptr));
        makeChangeButton->setText(QCoreApplication::translate("profilDialog", "Make the changes", nullptr));
        discoButton->setText(QCoreApplication::translate("profilDialog", "Disconnect", nullptr));
        resetButton->setText(QCoreApplication::translate("profilDialog", "reset values", nullptr));
        happylabel->setText(QCoreApplication::translate("profilDialog", "Hello", nullptr));
        hellolabel->setText(QCoreApplication::translate("profilDialog", ", happy to see you !", nullptr));
        changeInfoButton->setText(QCoreApplication::translate("profilDialog", "change informations", nullptr));
        nameLabel->setText(QCoreApplication::translate("profilDialog", "NameUser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profilDialog: public Ui_profilDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILDIALOG_H
