#include "addrubriquesdialog.h"
#include "ui_addrubriquesdialog.h"


ADDrubriquesDialog::ADDrubriquesDialog(const QString &userName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ADDrubriquesDialog)
{
    ui->setupUi(this);
    setWindowTitle("Add a Section");

    //placeholder for LineEdit
    ui->rubriqueLineEdit->setPlaceholderText("Add a new section");

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

    nameUser = userName;
}

ADDrubriquesDialog::~ADDrubriquesDialog()
{
    delete ui;
}


void ADDrubriquesDialog::on_CancelpushButton_clicked()
{
    this->close();
}


void ADDrubriquesDialog::on_AcceptpushButton_clicked()
{
    // add in the database a new 'section'
    QSqlDatabase::database().transaction();
    QString name_section = ui->rubriqueLineEdit->text();
    int user_id = getUserId(nameUser);

    //connecting to SQLITE db
    if (db.open()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO sections (name_section, id_user) VALUES (:name_section,:id_user)");
        query.bindValue(":name_section", name_section);
        query.bindValue(":id_user", user_id);

        if (query.exec()) {
            // Enregistrement réussi
            QMessageBox::information(this, "Registration", "adding the section successful.");
            // Réinitialisez les champs de QMessageBox après un enregistrement réussi si nécessaire
            QSqlDatabase::database().commit();
            ui->rubriqueLineEdit->clear();
            this->close();
        } else {
            // Échec de l'enregistrement
            QSqlDatabase::database().rollback();// Annulation de la transaction en cas d'échec
            QMessageBox::warning(this, "Registration", "Failed to adding the section. Please try again.");
        }

        db.close();
    } else {
        QMessageBox::critical(this, "Error", "Failed to connect to the database.");
    }
}





int ADDrubriquesDialog::getUserId(const QString &userName)
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
    } else {
        qDebug() << "Failed to open database connection: " << db.lastError().text();
    }

    qDebug() << "User ID for" << userName << "is" << userId;
    return userId;
}

