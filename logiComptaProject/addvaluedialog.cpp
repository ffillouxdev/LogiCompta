#include "addvaluedialog.h"
#include "ui_addvaluedialog.h"


using namespace std;

ADDvalueDialog::ADDvalueDialog(MainPage &mainPage, const QString &userName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ADDvalueDialog),
    mainPageRef(mainPage)
{
    ui->setupUi(this);
    setWindowTitle("Add Values");

    QLocale locale(QLocale::English, QLocale::UnitedStates);
    ui->amountDoubleSpinBox->setLocale(locale);

    // Database
    qDebug() << QSqlDatabase::drivers(); // List of available database drivers

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/fillo/OneDrive/Documents/PERSONNEL/projet C . C ++/LogiCompta/logiComptaProject/logicomptadb.sqlite");

    if (db.open()) {
        qDebug() << "Connected!";
    } else {
        qDebug() << "Failed to connect..." << db.lastError().text();
    }

    // parametre -> variable globale
    nameUser = userName;

    // afficher toutes les rubriques de la dans la combobox en comboboxItems
    if (db.open()) {
        QSqlQuery query(db);
        int id_user = getUserId(userName);
        query.prepare("SELECT name_section FROM sections WHERE id_user = :id_user;");
        query.bindValue(":id_user", id_user);

        // Charger les rubriques depuis la base de données
        if (query.exec()) {
            while (query.next()) {
                QString sectionName = query.value(0).toString();
                ui->sectionComboBox->addItem(sectionName);
            }
            db.close();  // on ferme la bd apres la boucle
        } else {
            qDebug() << "Failed to retrieve sections from the database";
        }
    }
}


ADDvalueDialog::~ADDvalueDialog()
{
    db.close();
    delete ui;
}

void ADDvalueDialog::on_CancelpushButton_clicked()
{
    this->close();
}


void ADDvalueDialog::on_acceptPushButton_clicked()
{
    // Récupérer toutes les valeurs pour les entrer dans la BD pour ensuite les trier et les afficher sur le logiciel
    QString date = ui->dateEdit->date().toString("yyyy-MM-dd");
    QString sectionLogiCompta = ui->sectionComboBox->currentText();
    QString amountStr = ui->amountDoubleSpinBox->text(); // Changer le nom pour éviter la confusion avec la variable "amount" dans la BD
    amountStr.replace(',', '.');
    double amount = amountStr.toDouble(); // Converti la chaîne en double
    QString name = ui->nameLineEdit->text();



    int id_user = getUserId(nameUser); // On appelle la fonction qui récupère l'id de l'utilisateur actuel
    int id_section = getSectionId(sectionLogiCompta);

    qDebug() << amount;

    if (db.open()) {
        QSqlQuery query(db);

        // On insert les valeurs dans invoices
        query.prepare("INSERT INTO invoices (id_user, amount, name, date, id_section) VALUES (:id_user, :amount, :name, :date, :id_section)");
        query.bindValue(":id_user", id_user);
        query.bindValue(":amount", amount);
        query.bindValue(":name", name);
        query.bindValue(":date", date);
        query.bindValue(":id_section", id_section);


        // Afficher les valeurs dans la console
        qDebug() << id_user << amount << name << date << id_section;

        if (query.exec()) {
            // Enregistrement réussi
            QMessageBox::information(this, "Registration", "Adding the invoice successful.");
            // Réinitialisez les champs de QMessageBox après un enregistrement réussi si nécessaire
            QSqlDatabase::database().commit();
            //mainPageRef.setCompteur();
            mainPageRef.putNewVal(amount);
            ui->amountDoubleSpinBox->clear();
            ui->nameLineEdit->clear();
            ui->dateEdit->clear();
            mainPageRef.setCompteur();
            this->close();
        } else {
            // Échec de l'enregistrement
            QSqlDatabase::database().rollback();
            QMessageBox::warning(this, "Registration", "Failed to add the invoice. Please try again.");
        }

        db.close();
    } else {
        QMessageBox::critical(this, "Error", "Failed to connect to the database.");
    }
}


int ADDvalueDialog::getUserId(const QString &userName)
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

int ADDvalueDialog::getSectionId(const QString &section)
{
    int sectionId = -1;

    if (db.open()){
        QSqlDatabase::database().transaction();

        QSqlQuery query(db);
        query.prepare("SELECT id_section FROM sections WHERE name_section = :sectionName;");
        query.bindValue(":sectionName", section);

        if (query.exec() && query.next()) {
            sectionId = query.value(0).toInt();
            qDebug() << "Section ID for" << section << "is" << sectionId;
        } else {
            qDebug() << "Query failed or no user found for sectionName:" << section;
        }

        QSqlDatabase::database().commit();
    } else {
        qDebug() << "Failed to open database connection: " << db.lastError().text();
    }

    qDebug() << "Section ID for" << section << "is" << sectionId;
    return sectionId;
}
