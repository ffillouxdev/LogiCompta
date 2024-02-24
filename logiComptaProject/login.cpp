#include "login.h"
#include "ui_login.h"


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

    connect(ui->passwordInput, &QLineEdit::returnPressed, this, &Login::on_loginbutton_clicked);

    // Database
    qDebug() << QSqlDatabase::drivers(); //List of availables database drivers

    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/fillo/OneDrive/Documents/PERSONNEL/projet C . C ++/LogiCompta/logiComptaProject/logicomptadb.sqlite");
    if(db.open())
    {
        qDebug() << "Connected!";
    }
    else
    {
        qDebug() << "Failed to connect..." << db.lastError().text();
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginbutton_clicked()
{
    //Variables to recup the value of the QLineEdit UserName and Password
    userName = ui->usernameInput->text();
    QString password = ui->passwordInput->text();
    db.open();
    if (!db.isOpen()){
        qDebug() << "Failed to open the database";
        return;
    } else {
        QSqlQuery query;
        query.prepare("SELECT * FROM login_register where username = :username and password = :password");
        query.bindValue(":username", userName);
        query.bindValue(":password", password);
        int line(0);
        if(query.exec()){
            while(query.next()){
                line++;
            }
            if(line == 1){
                cout << "username and password matched.";
                //connect page popup
                this->hide();
                MainPage *mainpage = new  MainPage(userName);
                mainpage->setUserName(userName);
                mainpage->show();
            }
            if(line < 1){
                cout << "username and password are not correct.";
                QMessageBox::warning(this,"ComptaPro","Please Enter Valid Username or Password.");
            }

            if(line > 1){
                cout << "username and password are duplicated.";
                QMessageBox::warning(this,"ComptaPro","Please Enter Valid Username or Password. those are duplicated");
            }
        }
    }
    db.close();
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
        }
    } else {
        qDebug() << "Erreur d'exécution de la requête : " << query.lastError().text();
        db.close();
    }
    db.close();
    QMessageBox::warning(this, "", QString::number(line));
}


QString Login::sendUsername()
{
    cout << "Username : " << userName.toStdString();
    QString userNameInMemory = userName;
    return userNameInMemory;
}

