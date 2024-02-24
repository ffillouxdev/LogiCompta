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


namespace Ui {
class invoicesList;
}

class invoicesList : public QDialog
{
    Q_OBJECT

public:
    explicit invoicesList(const QString &userName, QWidget *parent = nullptr);
    ~invoicesList();
    int getUserId(const QString &userName);
    int getSectionId(const QString &section);
    void updateTable(int index);

private:
    Ui::invoicesList *ui;
    QSqlDatabase db;
    QString userName;
};

#endif // INVOICESLIST_H
