#ifndef ADDVALUEDIALOG_H
#define ADDVALUEDIALOG_H


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

#include "mainpage.h"

namespace Ui {
class ADDvalueDialog;
}

class ADDvalueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ADDvalueDialog(MainPage &mainPage, const QString &userName, QWidget *parent = nullptr);
    ~ADDvalueDialog();
    int getUserId(const QString &userName);
    int getSectionId(const QString &section);

private slots:
    void on_CancelpushButton_clicked();

    void on_acceptPushButton_clicked();

private:
    Ui::ADDvalueDialog *ui;
    QSqlDatabase db;
    QString nameUser;
    MainPage &mainPageRef;
};




#endif // ADDVALUEDIALOG_H
