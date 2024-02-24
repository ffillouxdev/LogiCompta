#ifndef REGISTRATION_H
#define REGISTRATION_H


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

#include "login.h"

namespace Ui {
class Registration;
}


class Registration: public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private slots:
    void on_CancelButton_clicked();

    void on_confirmButton_clicked();

private:
    Ui::Registration *ui;
    QSqlDatabase db;
};

#endif // REGISTRATION_H
