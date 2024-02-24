#ifndef SECTIONLIST_H
#define SECTIONLIST_H



class MainPage;  // Forward declaration


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
