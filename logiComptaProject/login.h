#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QMessageBox>

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
#include <QPropertyAnimation>
#include <QAbstractAnimation>

#include "loading.h"
#include "mainpage.h"
#include "registration.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow {
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    void nb_data_user();
    QString sendUsername();

private slots:
    void on_loginbutton_clicked();
    void on_cancelbutton_clicked();
    void on_registrationButton_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase db;
    QString userName;

signals:
    void closed();
};


#endif // LOGIN_H
