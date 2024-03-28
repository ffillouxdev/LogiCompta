#include "invoiceslist.h"
#include "ui_invoiceslist.h"
#include "addvaluedialog.h"

// supprimer donnée(s), modifier donnée(s) dans les tableWigetsItems

invoicesList::invoicesList(MainPage &mainPage, const QString &userName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::invoicesList),
    mainPageRef(mainPage),
    addValueDialogInstance(nullptr),
    nameUser(userName)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/fillo/OneDrive/Documents/PERSONNEL/projet C . C ++/LogiCompta/logiComptaProject/logicomptadb.sqlite");

    if (!db.open()) {
        qDebug() << "Failed to connect..." << db.lastError().text();
        return;
    }
    loadSections(nameUser);
    db.close();

    connect(ui->ActualSectionComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &invoicesList::on_ActualSectionComboBox_currentIndexChanged);

    int userId = getUserId(nameUser);
    updateTable(userId, "divers");
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

void invoicesList::on_AddValueButton_clicked()
{
    if (!addValueDialogInstance) {
        addValueDialogInstance = new ADDvalueDialog(mainPageRef, nameUser);
        addValueDialogInstance->setAttribute(Qt::WA_DeleteOnClose);
        connect(addValueDialogInstance, &QObject::destroyed, this, [=]() { addValueDialogInstance = nullptr; });
        addValueDialogInstance->show();
    } else {
        addValueDialogInstance->raise();
        addValueDialogInstance->activateWindow();
    }
}

void invoicesList::updateTable(int userId, const QString &defaultSectionName)
{
    qDebug() << defaultSectionName << " " << userId;
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery query(db);
    query.prepare("SELECT invoices.amount, invoices.name, invoices.date, sections.name_section "
                  "FROM invoices "
                  "JOIN sections ON invoices.id_section = sections.id_section "
                  "JOIN login_register ON"
                  " sections.id_user = login_register.id_user "
                  "WHERE sections.id_user = :user_id AND sections.name_section = :name_section");
    query.bindValue(":user_id", userId);
    query.bindValue(":name_section", defaultSectionName);
    if (query.exec()) {
        modal->setQuery(std::move(query));

        int rows = modal->rowCount();
        int columns = modal->columnCount();

        ui->InvoicesTableWidget->setRowCount(rows);
        ui->InvoicesTableWidget->setColumnCount(columns);

        QStringList headers;
        headers << "Amount" << "Name" << "Date" << "Section";
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
}


void invoicesList::OrderTable()
{
    if (!dialogOrderInstance){
        dialogOrderInstance = new orderDialog(*this);
        dialogOrderInstance->setAttribute(Qt::WA_DeleteOnClose);
        connect(dialogOrderInstance, &QObject::destroyed, this, [=]() {dialogOrderInstance = nullptr; });
        dialogOrderInstance->show();
    }else{
        dialogOrderInstance->raise();
        dialogOrderInstance->activateWindow();
    }

}

void invoicesList::loadSections(const QString &userName)
{

    QSqlQueryModel *modal = new QSqlQueryModel();
    int user_id = getUserId(userName);
    QSqlQuery query(db);
    query.prepare("SELECT name_section FROM sections WHERE id_user = :id_user;");
    query.bindValue(":id_user", user_id);

    if (query.exec()) {
        QStringList existingSections; // Liste des sections déjà présentes
        for (int i = 0; i < ui->ActualSectionComboBox->count(); ++i) {
            existingSections << ui->ActualSectionComboBox->itemText(i);
        }

        while (query.next()) {
            QString sectionName = query.value(0).toString();
            if (!existingSections.contains(sectionName)) { // Vérifie si la section n'est pas déjà présente
                ui->ActualSectionComboBox->addItem(sectionName);
            }
        }
    } else {
        qDebug() << "Failed to retrieve sections from the database";
    }
}



void invoicesList::on_ActualSectionComboBox_currentIndexChanged(int index)
{
    QString selectedSection = ui->ActualSectionComboBox->currentText();
    int userId = getUserId(nameUser);
    updateTable(userId, selectedSection);
    loadSections(nameUser);
}

void invoicesList::on_OrderByValueButton_clicked()
{
    QString selectedOrder;
    int userId = getUserId(nameUser);
    OrderTable();
    loadSections(nameUser);

}

void invoicesList::OrderTableUpdate(int choice){
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery query(db);
    int userId = getUserId(nameUser);
    QString actualSectionName = ui->ActualSectionComboBox->currentText();
    qDebug() << "dsfghjkljhgfdsq";
    if (choice == 1){
        query.prepare("SELECT invoices.amount, invoices.name, invoices.date, sections.name_section "
                      "FROM invoices "
                      "JOIN sections ON invoices.id_section = sections.id_section "
                      "JOIN login_register ON sections.id_user = login_register.id_user "
                      "WHERE sections.id_user = :user_id AND sections.name_section = :name_section"
                      "ORDER invoices.amount BY ASC");
    }else if(choice == 2) {
        query.prepare("SELECT invoices.amount, invoices.name, invoices.date, sections.name_section "
                      "FROM invoices "
                      "JOIN sections ON invoices.id_section = sections.id_section "
                      "JOIN login_register ON sections.id_user = login_register.id_user "
                      "WHERE sections.id_user = :user_id AND sections.name_section = :name_section"
                      "ORDER invoices.amount BY DESC");
    }else {
        return ;
    }

    query.bindValue(":user_id", userId);
    query.bindValue(":name_section", actualSectionName);
    if (query.exec()) {
        modal->setQuery(std::move(query));

        int rows = modal->rowCount();
        int columns = modal->columnCount();

        ui->InvoicesTableWidget->setRowCount(rows);
        ui->InvoicesTableWidget->setColumnCount(columns);

        QStringList headers;
        headers << "Amount" << "Name" << "Date" << "Section";
        ui->InvoicesTableWidget->setHorizontalHeaderLabels(headers);

        for (int row = 0; row < rows; ++row) {
            for (int column = 0; column < columns; ++column) {
                ui->InvoicesTableWidget->setItem(row, column, new QTableWidgetItem(modal->data(modal->index(row, column)).toString()));
            }
        }
        qDebug() << "Number of rows:" << rows;
        db.close();
    } else {
        qDebug() << "Query failed:" << query.lastError().text();
        db.close();
    }
}
