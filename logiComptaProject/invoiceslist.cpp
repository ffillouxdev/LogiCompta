#include "invoiceslist.h"
#include "ui_invoiceslist.h"

invoicesList::invoicesList(const QString &userName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::invoicesList)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers(); // List of available database drivers

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/fillo/OneDrive/Documents/PERSONNEL/projet C . C ++/LogiCompta/logiComptaProject/logicomptadb.sqlite");

    if (db.open()) {
        qDebug() << "Connected!";
    } else {
        qDebug() << "Failed to connect..." << db.lastError().text();
        // Add appropriate error handling here
        return;  // Exit the constructor if the database connection fails
    }

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    int user_id = getUserId(userName);
    qry->bindValue(":user_id", user_id);

    qry->prepare("SELECT sections.name_section, login_register.username FROM sections JOIN login_register ON sections.id_user = login_register.id_user WHERE sections.id_user = " + QString::number(user_id));
    if (qry->exec()) {
        modal->setQuery(*qry);

        int rows = modal->rowCount();
        int columns = modal->columnCount();

        // Set the number of rows and columns for your QTableWidget
        /*ui->tableWidget->setRowCount(rows);
        ui->tableWidget->setColumnCount(columns);*/

        for (int row = 0; row < rows; ++row) {
            for (int column = 0; column < columns; ++column) {
                // Set the item for each cell
                //ui->tableWidget->setItem(row, column, new QTableWidgetItem(modal->data(modal->index(row, column)).toString()));
            }
        }

        qDebug() << "Number of rows:" << rows;
    } else {
        qDebug() << "Query failed:" << qry->lastError().text();
        // Add appropriate error handling here
    }
}


invoicesList::~invoicesList()
{
    delete ui;
}


int invoicesList::getUserId(const QString &userName)
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


int invoicesList::getSectionId(const QString &section)
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
