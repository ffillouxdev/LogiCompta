#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("LogiCompta");
    QMainWindow::showMaximized();


    //placeholder for login LineEdit
    ui->usernameInput->setPlaceholderText("User Name");
    ui->passwordInput->setPlaceholderText("Password");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginbutton_clicked()
{
    // Variables to recup the value of the QLineEdit UserName and Password
    QString UserName = ui->usernameInput->text();
    QString Password = ui->passwordInput->text();

    if (UserName == "ComptaPro" && Password == "AZERTY")
    {
        //connect page popup
        this->hide();
        MainPage *mainpage = new  MainPage();
        mainpage->show();


    }
    else
    {
        QMessageBox::warning(this,"ComptaPro","Please Enter Valid Username or Password.");
    }

}


void MainWindow::on_cancelbutton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"ComptaPro","Are you sure to close the application ?", QMessageBox::Yes |QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

