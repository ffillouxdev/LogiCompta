#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QMessageBox>

#include "connexion_sqlite.h"
#include "mainpage.h"
#include "registration.h"

#include <QSql>

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
    void on_registrationButton_clicked();
    void nb_data_user();

private:
    Ui::Login *ui;
    QSqlDatabase db;
};

#endif // LOGIN_H
