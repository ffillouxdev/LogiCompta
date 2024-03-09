#include "profildialog.h"
#include "ui_profildialog.h"
#include "login.h"

profilDialog::profilDialog(MainPage &mainPage, const QString &userName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profilDialog),
    changeInfosDialogInstance(nullptr),
    mainPageRef(mainPage)
{
    ui->setupUi(this);
    setWindowTitle("Profil");

    ui->nameLabel->setText(userName);

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

profilDialog::~profilDialog()
{
    delete ui;
}

void profilDialog::on_cancelButton_clicked()
{
    this->close();
}

void profilDialog::on_discoButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"ComptaPro","Are you sure to disconnect ?", QMessageBox::Yes |QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        emit logoutRequested();
        this->close();
        loading *loadingPage = new loading();
        loadingPage->show();

        QTimer::singleShot(3000, this, [=]() {

            Login *loginPage = new Login();
            loginPage->show();
        });
    }
}



int profilDialog::getUserId(const QString &userName)
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


void profilDialog::on_resetButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "ComptaPro", "Are you sure to delete all of the data?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        db.open();
        if (!db.isOpen())
        {
            qDebug() << "Failed to open the database";
            return;
        }
        else
        {
            QSqlQuery query;

            int userId = getUserId(ui->nameLabel->text());
            if (userId != -1)
            {
                mainPageRef.Set_AT_Zero();
                query.prepare("DELETE FROM sections WHERE id_user = :user_id AND name_section != :name_section");
                query.bindValue(":user_id", userId);
                query.bindValue(":name_section", "divers");
                if (!query.exec())
                {
                    qDebug() << "Failed to delete the data for table sections";
                    return;
                }
            }

            query.prepare("DELETE FROM invoices WHERE id_user = :user_id");
            query.bindValue(":user_id", userId);
            if (!query.exec())
            {
                qDebug() << "Failed to delete the data for table invoices";
                return;
            }

            query.prepare("UPDATE sqlite_sequence SET seq = 1 WHERE name = 'invoices'");
            if (!query.exec())
            {
                qDebug() << "Failed to reset increment for invoices:" << query.lastError().text();
                return;
            }

            if (userId != -1)
            {
                query.prepare("UPDATE sqlite_sequence SET seq = 1 WHERE name = 'sections'");
                if (!query.exec())
                {
                    qDebug() << "Failed to reset increment for sections:" << query.lastError().text();
                    return;
                }
            }
            QMessageBox::information(this, ui->nameLabel->text(), "All data deleted successfully.");
        }
        db.close();
    }
}


void profilDialog::on_changeInfoButton_clicked()
{
    if (!changeInfosDialogInstance) {
        changeInfosDialogInstance = new changeInformationsDialog();
        changeInfosDialogInstance->setAttribute(Qt::WA_DeleteOnClose);
        connect(changeInfosDialogInstance, &QObject::destroyed, this, [=]() {
            changeInfosDialogInstance = nullptr;
        });
        changeInfosDialogInstance->show();
    } else {
        changeInfosDialogInstance->raise();
        changeInfosDialogInstance->activateWindow();
    }
}

