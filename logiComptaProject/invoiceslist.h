#ifndef INVOICESLIST_H
#define INVOICESLIST_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSql>
#include <QDebug>
#include <QSqlQueryModel>

#include "connexion_sqlite.h"


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


private:
    Ui::invoicesList *ui;
    QSqlDatabase db;
};

#endif // INVOICESLIST_H
