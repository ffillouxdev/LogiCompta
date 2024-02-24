#include "invoiceslist.h"
#include "ui_invoiceslist.h"

invoicesList::invoicesList(const QString &userName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::invoicesList)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/fillo/OneDrive/Documents/PERSONNEL/projet C . C ++/LogiCompta/logiComptaProject/logicomptadb.sqlite");

    if (!db.open()) {
        qDebug() << "Failed to connect..." << db.lastError().text();
        return;
    }

    QSqlQueryModel *modal = new QSqlQueryModel();
    int user_id = getUserId(userName);

    // afficher toutes les rubriques de la dans la combobox en comboboxItems
    QSqlQuery query(db);
    query.prepare("SELECT name_section FROM sections WHERE id_user = :id_user;");
    query.bindValue(":id_user", user_id);

    // Charger les rubriques depuis la base de données
    if (query.exec()) {
        while (query.next()) {
            QString sectionName = query.value(0).toString();
            ui->ActualSectionComboBox->addItem(sectionName);
        }
    } else {
        qDebug() << "Failed to retrieve sections from the database";
    }

    query.prepare("SELECT DISTINCT invoices.amount, invoices.name, invoices.date FROM invoices JOIN sections ON invoices.id_user = "
                  "sections.id_user JOIN login_register ON sections.id_user = login_register.id_user WHERE sections.id_user = :user_id"
                  /*"AND invoices.id_section = :section_id"*/);
    query.bindValue(":user_id", user_id);
    /*query.bindValue(":section_id");*/
    if (query.exec()) {
        modal->setQuery(query);

        int rows = modal->rowCount();
        int columns = modal->columnCount();

        ui->InvoicesTableWidget->setRowCount(rows);
        ui->InvoicesTableWidget->setColumnCount(columns);

        QStringList headers;
        headers << "Amount" << "Name" << "Date";
        ui->InvoicesTableWidget->setHorizontalHeaderLabels(headers);

        for (int row = 0; row < rows; ++row) {
            for (int column = 0; column < columns; ++column) {
                ui->InvoicesTableWidget->setItem(row, column, new QTableWidgetItem(modal->data(modal->index(row, column)).toString()));
            }
        }

        qDebug() << "Number of rows:" << rows;
    } else {
        qDebug() << "Query failed:" << query.lastError().text();
    }

    db.close();
}

invoicesList::~invoicesList()
{
    delete ui;
}

int invoicesList::getUserId(const QString &userName)
{
    int userId = -1;

    if (db.open()) {
        QSqlQuery query(db);
        query.prepare("SELECT id_user FROM login_register WHERE username = :username;");
        query.bindValue(":username", userName);

        if (query.exec() && query.next()) {
            userId = query.value(0).toInt();
            qDebug() << "User ID for" << userName << "is" << userId;
        } else {
            qDebug() << "Query failed or no user found for username:" << userName;
        }
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
        QSqlQuery query(db);
        query.prepare("SELECT id_section FROM sections WHERE name_section = :sectionName;");
        query.bindValue(":sectionName", section);

        if (query.exec() && query.next()) {
            sectionId = query.value(0).toInt();
            qDebug() << "Section ID for" << section << "is" << sectionId;
        } else {
            qDebug() << "Query failed or no user found for sectionName:" << section;
        }
    } else {
        qDebug() << "Failed to open database connection: " << db.lastError().text();
    }

    qDebug() << "Section ID for" << section << "is" << sectionId;
    return sectionId;
}
