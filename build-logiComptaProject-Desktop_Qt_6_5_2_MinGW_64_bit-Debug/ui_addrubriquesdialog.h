/********************************************************************************
** Form generated from reading UI file 'addrubriquesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRUBRIQUESDIALOG_H
#define UI_ADDRUBRIQUESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ADDrubriquesDialog
{
public:
    QPushButton *AcceptpushButton;
    QPushButton *CancelpushButton;
    QLineEdit *rubriqueLineEdit;

    void setupUi(QDialog *ADDrubriquesDialog)
    {
        if (ADDrubriquesDialog->objectName().isEmpty())
            ADDrubriquesDialog->setObjectName("ADDrubriquesDialog");
        ADDrubriquesDialog->resize(267, 167);
        AcceptpushButton = new QPushButton(ADDrubriquesDialog);
        AcceptpushButton->setObjectName("AcceptpushButton");
        AcceptpushButton->setGeometry(QRect(20, 110, 91, 41));
        CancelpushButton = new QPushButton(ADDrubriquesDialog);
        CancelpushButton->setObjectName("CancelpushButton");
        CancelpushButton->setGeometry(QRect(160, 110, 91, 41));
        rubriqueLineEdit = new QLineEdit(ADDrubriquesDialog);
        rubriqueLineEdit->setObjectName("rubriqueLineEdit");
        rubriqueLineEdit->setGeometry(QRect(30, 40, 211, 31));

        retranslateUi(ADDrubriquesDialog);

        QMetaObject::connectSlotsByName(ADDrubriquesDialog);
    } // setupUi

    void retranslateUi(QDialog *ADDrubriquesDialog)
    {
        ADDrubriquesDialog->setWindowTitle(QCoreApplication::translate("ADDrubriquesDialog", "Dialog", nullptr));
        AcceptpushButton->setText(QCoreApplication::translate("ADDrubriquesDialog", "Accept", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("ADDrubriquesDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ADDrubriquesDialog: public Ui_ADDrubriquesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRUBRIQUESDIALOG_H
