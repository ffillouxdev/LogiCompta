#include "addvaluedialog.h"
#include "ui_addvaluedialog.h"


//architecture hexagonale
//AFFICHER LES CHOSES EN CONSOLE
#include <iostream>

using namespace std;

ADDvalueDialog::ADDvalueDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ADDvalueDialog)
{
    ui->setupUi(this);
}

ADDvalueDialog::~ADDvalueDialog()
{
    delete ui;
}

void ADDvalueDialog::on_CancelpushButton_clicked()
{
    this->close();
}


void ADDvalueDialog::on_acceptPushButton_clicked()
{
    // recuperer toutes les valeurs pour les rentrer dans la BD pour ensuite les trier et les afficher sur le logiciel
    QString date = ui->dateEdit->text();
    QString rubrique = ui->rubriqueComboBox->currentText();
    QString prix = ui->prixLineEdit->text();

    // Afficher les valeurs
    cout << "Date: " << date.toStdString() << endl;
    cout << "Rubrique: " << rubrique.toStdString() << endl;
    cout << "Prix: " << prix.toStdString() << endl;

    this->close();
}

