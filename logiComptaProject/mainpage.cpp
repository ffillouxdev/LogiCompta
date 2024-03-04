#include "mainpage.h"
#include "ui_mainpage.h"
#include "addvaluedialog.h"


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
    qDebug() << "invoiceButton clicked";
    if (!addValueInstance || addValueInstance->isHidden()) {
        addValueInstance = new ADDvalueDialog(*this, m_userName);
        addValueInstance->setAttribute(Qt::WA_DeleteOnClose);
        connect(addValueInstance, &QObject::destroyed, this, [&]() { addValueInstance = nullptr; });
        addValueInstance->show();
    } else {
        addValueInstance->raise();
        addValueInstance->activateWindow();
    }
}


void MainPage::on_ProfilpushButton_clicked()
{
    if (!profilDialogInstance) {
        // Initialisez profilDialogInstance avec le nom d'utilisateur
        profilDialogInstance = new profilDialog(*this, m_userName, this);
        profilDialogInstance->setAttribute(Qt::WA_DeleteOnClose);
        connect(profilDialogInstance, &profilDialog::logoutRequested, this, &MainPage::logout);
        connect(profilDialogInstance, &QObject::destroyed, this, [=]() { profilDialogInstance = nullptr; });
        profilDialogInstance->show();
    } else {
        profilDialogInstance->raise();
        profilDialogInstance->activateWindow();
    }
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
    if (!rubriqueDialog) {
        rubriqueDialog = new ADDrubriquesDialog(m_userName);
        rubriqueDialog->setAttribute(Qt::WA_DeleteOnClose);
        connect(rubriqueDialog, &QObject::destroyed, this, [=]() { rubriqueDialog = nullptr; });
        rubriqueDialog->show();
    } else {
        rubriqueDialog->raise();
        rubriqueDialog->activateWindow();
    }
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
                currentValue = amount;
                qDebug() << amount;
                if(amount == ""){
                    ui->counter->setText("0.0");
                    ui->counter->setStyleSheet("color: #333333;");
                }else{
                    ui->counter->setText(amount);
                    ui->counter->setStyleSheet("color: #333333;");
                }
            } else {
                qDebug() << "Aucun résultat trouvé pour l'utilisateur avec l'ID : " << id_user;
                ui->counter->setText("0.0");
            }
        } else {
            qDebug() << "Erreur d'execution de la requete : " << query.lastError().text();
            ui->counter->setText("0.0");
        }

        db.close();
    }
}

void MainPage::putNewVal(double amount) {
    // On récup la valeur actuelle du compteur
    double currentValueDOUBLE = ui->counter->text().toDouble();
    //    qDebug() << currentValueDOUBLE;
    // On ajoute le param 'amount' à la valeur actuelle
    double updatedValue = currentValueDOUBLE + amount;
    //MAJ du texte du compteur avec la nouvelle valeur
    ui->counter->setText(QString::number(updatedValue));
    // Appliquer la couleur du texte en gris foncé
    ui->counter->setStyleSheet("color: #333333;");
}



void MainPage::on_listSectionsPushButton_clicked()
{
    if (!sectionListDialog) {
        sectionListDialog = new sectionList(*this, m_userName);
        sectionListDialog->setAttribute(Qt::WA_DeleteOnClose);
        connect(sectionListDialog, &QObject::destroyed, this, [=]() { sectionListDialog = nullptr; });
        sectionListDialog->show();
    } else {
        sectionListDialog->raise();
        sectionListDialog->activateWindow();
    }
}


void MainPage::on_listInvoicesPushButton_clicked()
{
    if (!invoicesListValueInstance) {
        invoicesListValueInstance = new invoicesList(m_userName);
        invoicesListValueInstance->setAttribute(Qt::WA_DeleteOnClose);
        connect(invoicesListValueInstance, &QObject::destroyed, this, [=]() {invoicesListValueInstance = nullptr; });
        invoicesListValueInstance->show();
    } else{
        invoicesListValueInstance->raise();
        invoicesListValueInstance->activateWindow();
    }
}

void MainPage::on_pushButton_clicked()
{
    // redirigez les gens vers mon site
    QDesktopServices::openUrl(QUrl("http://localhost:3000"));
}


void MainPage::Set_AT_Zero(){
    ui->counter->setText("0.0");
}
