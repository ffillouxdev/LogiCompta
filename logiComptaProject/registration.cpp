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
