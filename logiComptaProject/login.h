#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql>
#include <QtCore>
#include <QDebug>

#include "mainpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow {
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginbutton_clicked();
    void on_cancelbutton_clicked();
    void on_registerButton_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
