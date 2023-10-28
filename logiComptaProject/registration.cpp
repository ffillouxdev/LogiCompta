#include "registration.h"
#include "ui_registration.h"

#include "login.h"
#include "connexion_sqlite.h"

Registration::Registration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    setWindowTitle("Register");
    QMainWindow::showMaximized();

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
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_CancelButton_clicked()
{
    this->hide();
    Login *login = new Login();
    login->show();
}


void Registration::on_confirmButton_clicked()
{
    // Get the input values from the lineEdits
    QString username = ui->userNameLineEdit->text();
    QString email = ui->emailLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString confirm_password = ui->confirmPassLineEdit->text();

    //Check if any of the fields are empty
    if (username.isEmpty() || password.isEmpty() || confirm_password.isEmpty()) {
        QMessageBox::warning(this, "Registration", "Please fill in all the fields.");
        return;
    }

    // Check if the password and confirm_password match
    if (password != confirm_password) {
        QMessageBox::warning(this, "Registration", "Passwords do not match.");
        return;
    }

    //connecting to SQLITE db
    db.open();
    QSqlDatabase::database().transaction();
    QSqlQuery query(db);
    query.prepare("INSERT INTO login_register (username, Email, password, confirm_password) VALUES (:username, NULL, :password, :confirm_password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":confirm_password", confirm_password);
    query.exec();
    QSqlDatabase::database().commit();
    db.close();


}



