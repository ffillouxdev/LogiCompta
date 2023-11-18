#include "mainpage.h"
#include "ui_mainpage.h"

#include <iostream>
#include <QDialog>
using namespace std;


MainPage::MainPage(const QString &userName, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    setWindowTitle("LogiCompta");
    QMainWindow::showMaximized();

    qDebug() << userName;
    m_userName = userName;

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
    setCompteur();
    ui->counter->setEnabled(false);

}

MainPage::~MainPage()
{
     db.close();
    delete ui;
}

void MainPage::on_invoiceButton_clicked()
{
    ADDvalueDialog *value = new ADDvalueDialog(m_userName);
    value->show();
}


void MainPage::on_ProfilpushButton_clicked()
{
    // Open user profil popup
    profilDialog *profil = new profilDialog(m_userName);
    connect(profil, &profilDialog::logoutRequested, this, &MainPage::logout);
    profil->show();

}

void MainPage::setUserName(const QString &userName)
{
    // Stockez la valeur du nom d'utilisateur dans une variable membre de la classe profilDialog
    m_userName = userName;
}

void MainPage::logout()
{
    close(); // Fermez la fenêtre MainPage
}

void MainPage::on_addSectionButton_clicked()
{
    ADDrubriquesDialog *rubrique = new ADDrubriquesDialog();
    rubrique->show();

}

int MainPage::getUserId(const QString &userName)
{
    int userId = -1;

    if (db.open()) {
        QSqlDatabase::database().transaction();

        QSqlQuery query(db);
        query.prepare("SELECT id_user FROM login_register WHERE username = :username;");
        query.bindValue(":username", userName);

        if (query.exec() && query.next()) {
            userId = query.value(0).toInt();
            qDebug() << "User ID for" << userName << "is" << userId;
        } else {
            qDebug() << "Query failed or no user found for username:" << userName;
        }

        QSqlDatabase::database().commit();
        db.close();
    } else {
        qDebug() << "Failed to open database connection: " << db.lastError().text();
    }

    qDebug() << "User ID for" << userName << "is" << userId;
    return userId;
}

void MainPage::setCompteur() {
    int id_user = getUserId(m_userName);

    if (db.open()) {
        QSqlQuery query(db);
        qDebug() << id_user;

        query.prepare("SELECT SUM(amount) FROM invoices WHERE id_user = :id_user;");
        query.bindValue(":id_user", id_user);

        if (query.exec()) {
            if (query.next()) {
                QString amount = query.value(0).toString();
                qDebug() << amount;
                if(amount == ""){
                    ui->counter->setPlaceholderText("0.0");
                }else{
                    ui->counter->setPlaceholderText(amount);
                }
            } else {
                qDebug() << "Aucun résultat trouvé pour l'utilisateur avec l'ID : " << id_user;
                ui->counter->setPlaceholderText("0.0");
            }
        } else {
            qDebug() << "Erreur d'execution de la requete : " << query.lastError().text();
            ui->counter->setPlaceholderText("0.0");
        }

        db.close();
    }
}
