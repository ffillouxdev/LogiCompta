#ifndef MAINPAGE_H
#define MAINPAGE_H


#include <QDialog>
#include <QSql>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <iostream>
#include <QSqlQueryModel>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QDesktopServices>
#include <QUrl>

#include "profildialog.h"
#include "addrubriquesdialog.h"
#include "sectionlist.h"
#include "invoiceslist.h"



namespace Ui {
class MainPage;
}

class ADDvalueDialog;

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(const QString &userName, QWidget *parent = nullptr);
    ~MainPage();
    int getUserId(const QString &userName);
    void setUserName(const QString &userName);
    void logout();
    void setCompteur();
    void putNewVal(double amount);
    void Set_AT_Zero();


private slots:
    void on_ProfilpushButton_clicked();

    void on_invoiceButton_clicked();

    void on_addSectionButton_clicked();

    void on_listSectionsPushButton_clicked();

    void on_listInvoicesPushButton_clicked();

    void on_pushButton_clicked();


private:
    Ui::MainPage *ui;
    QSqlDatabase db;
    QString m_userName;
    QString currentValue;
    profilDialog *profilDialogInstance = nullptr;
    ADDrubriquesDialog *rubriqueDialog = nullptr;
    sectionList *sectionListDialog = nullptr;
    ADDvalueDialog *addValueInstance = nullptr;
    invoicesList *invoicesListValueInstance = nullptr;
};

#endif // MAINPAGE_H
