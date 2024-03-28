#ifndef INVOICESLIST_H
#define INVOICESLIST_H

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
#include "orderdialog.h"

class ADDvalueDialog;
class MainPage;

namespace Ui {
class invoicesList;
}

class invoicesList : public QDialog
{
    Q_OBJECT

public:
    explicit invoicesList(MainPage &mainPage, const QString &userName, QWidget *parent = nullptr);
    ~invoicesList();
    int getUserId(const QString &userName);
    int getSectionId(const QString &section);
    void updateTable(int index);
    void OrderTableUpdate(int choice);

private slots:
    void on_AddValueButton_clicked();
    void on_ActualSectionComboBox_currentIndexChanged(int index);

    void on_OrderByValueButton_clicked();
    void OrderTable();

private:
    Ui::invoicesList *ui;
    QSqlDatabase db;
    QString userName;
    MainPage &mainPageRef;
    QString nameUser;
    ADDvalueDialog *addValueDialogInstance;
    void loadSections(const QString &userName);
    void updateTable(int userId, const QString &defaultSectionName);
    orderDialog *dialogOrderInstance = nullptr;
};

#endif // INVOICESLIST_H
