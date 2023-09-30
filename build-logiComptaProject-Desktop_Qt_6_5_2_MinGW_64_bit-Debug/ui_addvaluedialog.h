/********************************************************************************
** Form generated from reading UI file 'addvaluedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVALUEDIALOG_H
#define UI_ADDVALUEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ADDvalueDialog
{
public:
    QPushButton *acceptPushButton;
    QPushButton *CancelpushButton;
    QLabel *addValueLabel;
    QLineEdit *prixLineEdit;
    QComboBox *rubriqueComboBox;
    QDateEdit *dateEdit;

    void setupUi(QDialog *ADDvalueDialog)
    {
        if (ADDvalueDialog->objectName().isEmpty())
            ADDvalueDialog->setObjectName("ADDvalueDialog");
        ADDvalueDialog->resize(260, 334);
        acceptPushButton = new QPushButton(ADDvalueDialog);
        acceptPushButton->setObjectName("acceptPushButton");
        acceptPushButton->setGeometry(QRect(30, 280, 80, 31));
        CancelpushButton = new QPushButton(ADDvalueDialog);
        CancelpushButton->setObjectName("CancelpushButton");
        CancelpushButton->setGeometry(QRect(150, 280, 80, 31));
        addValueLabel = new QLabel(ADDvalueDialog);
        addValueLabel->setObjectName("addValueLabel");
        addValueLabel->setGeometry(QRect(50, 10, 161, 20));
        prixLineEdit = new QLineEdit(ADDvalueDialog);
        prixLineEdit->setObjectName("prixLineEdit");
        prixLineEdit->setGeometry(QRect(30, 50, 201, 31));
        rubriqueComboBox = new QComboBox(ADDvalueDialog);
        rubriqueComboBox->addItem(QString());
        rubriqueComboBox->setObjectName("rubriqueComboBox");
        rubriqueComboBox->setGeometry(QRect(30, 100, 201, 31));
        dateEdit = new QDateEdit(ADDvalueDialog);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(30, 150, 201, 31));

        retranslateUi(ADDvalueDialog);

        QMetaObject::connectSlotsByName(ADDvalueDialog);
    } // setupUi

    void retranslateUi(QDialog *ADDvalueDialog)
    {
        ADDvalueDialog->setWindowTitle(QCoreApplication::translate("ADDvalueDialog", "Dialog", nullptr));
        acceptPushButton->setText(QCoreApplication::translate("ADDvalueDialog", "Accept", nullptr));
        CancelpushButton->setText(QCoreApplication::translate("ADDvalueDialog", "Cancel", nullptr));
        addValueLabel->setText(QCoreApplication::translate("ADDvalueDialog", "ajoutez une nouvelle valeur", nullptr));
        prixLineEdit->setText(QCoreApplication::translate("ADDvalueDialog", "prix", nullptr));
        rubriqueComboBox->setItemText(0, QCoreApplication::translate("ADDvalueDialog", "divers", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ADDvalueDialog: public Ui_ADDvalueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVALUEDIALOG_H
