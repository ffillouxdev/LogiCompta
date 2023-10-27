#include "registration.h"
#include "ui_registration.h"


Registration::Registration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    setWindowTitle("Register");
    QMainWindow::showMaximized();

}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_CancelButton_clicked()
{
    this->hide();
    /*Login *login = new Login();
    login->show();*/
}


void Registration::on_confirmButton_clicked()
{
    // create a new LogiCompta User in the DB

}

