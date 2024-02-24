#include "sectionlist.h"
#include "ui_sectionlist.h"

sectionList::sectionList(MainPage &mainPage, const QString &userName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sectionList)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/fillo/OneDrive/Documents/PERSONNEL/projet C . C ++/LogiCompta/logiComptaProject/logicomptadb.sqlite");

    if (db.open()) {
        qDebug() << "Connected!";
    } else {
        qDebug() << "Failed to connect..." << db.lastError().text();
        return;
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

        ui->tableWidget->setRowCount(rows);
        ui->tableWidget->setColumnCount(columns);

        QStringList headers;
        headers << "name_section" << "username";
        ui->tableWidget->setHorizontalHeaderLabels(headers);

        for (int row = 0; row < rows; ++row) {
            for (int column = 0; column < columns; ++column) {
                ui->tableWidget->setItem(row, column, new QTableWidgetItem(modal->data(modal->index(row, column)).toString()));
            }
        }

        qDebug() << "Number of rows:" << rows;
    } else {
        qDebug() << "Query failed:" << qry->lastError().text();
    }
}

sectionList::~sectionList()
{
    delete ui;
}


int sectionList::getUserId(const QString &userName)
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
