#include "mainpage.h"
#include "ui_mainpage.h"

#include <iostream>
#include <QDialog>
using namespace std;


MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    setWindowTitle("LogiCompta");
    QMainWindow::showMaximized();

    //placeholder for LineEdit
    ui->counter->setPlaceholderText("0.0");
    ui->counter->setEnabled(false);
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::on_invoiceButton_clicked()
{
    ADDvalueDialog *value = new ADDvalueDialog();
    value->show();
}


void MainPage::on_ProfilpushButton_clicked()
{
    // Open user profil popup
    profilDialog *profil = new profilDialog();

    // check and find the user name to put it in nameLabel

    profil->show();
}


void MainPage::on_addRubButton_clicked()
{
    ADDrubriquesDialog *rubrique = new ADDrubriquesDialog();

    rubrique->show();
}

