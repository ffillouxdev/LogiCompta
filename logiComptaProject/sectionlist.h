#ifndef SECTIONLIST_H
#define SECTIONLIST_H

#include <QDialog>
#include <QSql>
#include <QDebug>

class MainPage;  // Forward declaration

#include "connexion_sqlite.h"

#include <iostream>
#include <QSqlQueryModel>

namespace Ui {
class sectionList;
}

class sectionList : public QDialog
{
    Q_OBJECT

public:
    explicit sectionList(MainPage &mainPage, const QString &userName, QWidget *parent = nullptr);
    ~sectionList();
    int getUserId(const QString &userName);

private:
    Ui::sectionList *ui;
    QSqlDatabase db;
};

#endif // SECTIONLIST_H
