#include "login.h"
#include "ui_login.h"

#include <QMessageBox>

using namespace std;

Login::Login(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("LogiCompta");
    QMainWindow::showMaximized();
    reelconnexionDB();
    nb_data_user();

        //placeholder for login LineEdit
    ui->usernameInput->setPlaceholderText("User Name");
    ui->passwordInput->setPlaceholderText("Password");
}

Login::~Login()
{
    delete ui;
}


void Login::on_loginbutton_clicked()
{
    //Variables to recup the value of the QLineEdit UserName and Password
    QString UserName = ui->usernameInput->text();
    QString Password = ui->passwordInput->text();

    //reelconnexionDB.open();

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


void Login::on_cancelbutton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"ComptaPro","Are you sure to close the application ?", QMessageBox::Yes |QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}


void Login::on_registrationButton_clicked()
{
    this->hide();
    Registration *registration = new Registration();
    registration->show();
}


void Login::nb_data_user()
{
    int line (0);
    QSqlQuery request;
    request.exec("select count(*) from login_register");
    while(request.next())
    {
        line=request.value(0).toInt();
    }
    QMessageBox::warning(this,"", QString::number(line));
}
