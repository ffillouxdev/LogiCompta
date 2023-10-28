#include "login.h"
#include "ui_login.h"

#include <QMessageBox>
#include <QString>

using namespace std;

Login::Login(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("LogiCompta");
    QMainWindow::showMaximized();
        //placeholder for login LineEdit
    ui->usernameInput->setPlaceholderText("User Name");
    ui->passwordInput->setPlaceholderText("Password");

    // Database
    qDebug() << QSqlDatabase::drivers(); //List of availables database drivers
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath() + "/logicomptadb.sqlite");
    if(db.open())
    {
        qDebug() << "Connected!";
    }
    else
    {
        qDebug() << "Failed to connect..." << db.lastError().text();
    }

    nb_data_user();
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
    db.open();
    QSqlDatabase::database().transaction();
    QSqlQuery query(db);
    int line = 0;
    if (query.exec("SELECT COUNT(*) FROM login_register;")) {
        if (query.next()) {
            line = query.value(0).toInt();
            line++;
        }
    } else {
        qDebug() << "Erreur d'exécution de la requête : " << query.lastError().text();
        db.close();
    }
    db.close();
    QMessageBox::warning(this, "", QString::number(line));
}

