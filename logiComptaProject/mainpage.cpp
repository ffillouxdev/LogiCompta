#include "mainpage.h"
#include "mainwindow.h"
#include "ui_mainpage.h"

#include <iostream>
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


/*
// Action when the button discoButton is clicked
void MainPage::on_discoButton_clicked()
{

}


*/



void MainPage::on_invoiceButton_clicked()
{
    ADDvalueDialog *dialog = new ADDvalueDialog();
    //  With use Of Application Model You can access background controls

    dialog->show();
}


void MainPage::on_ProfilpushButton_clicked()
{
    // Open user profil popup
    profilDialog *profil = new profilDialog();

    // check and find the user name to put it in nameLabel



    profil->show();
}

