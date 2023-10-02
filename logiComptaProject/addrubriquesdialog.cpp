#include "addrubriquesdialog.h"
#include "ui_addrubriquesdialog.h"

ADDrubriquesDialog::ADDrubriquesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ADDrubriquesDialog)
{
    ui->setupUi(this);
    setWindowTitle("Add a Rubrique");

    //placeholder for LineEdit
    ui->rubriqueLineEdit->setPlaceholderText("Add a new rubrique");

}

ADDrubriquesDialog::~ADDrubriquesDialog()
{
    delete ui;
}


void ADDrubriquesDialog::on_CancelpushButton_clicked()
{
    this->close();
}


void ADDrubriquesDialog::on_AcceptpushButton_clicked()
{
    // add in the database a new 'rubriques'

}

