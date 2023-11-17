#include "addrubriquesdialog.h"
#include "ui_addrubriquesdialog.h"

#include "connexion_sqlite.h"

ADDrubriquesDialog::ADDrubriquesDialog(QWidget *parent) :
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

    //connecting to SQLITE db
    if (db.open()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO sections (name_section) VALUES (:name_section)");
        query.bindValue(":name_section", name_section);

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


