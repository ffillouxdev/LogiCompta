#ifndef PROFILDIALOG_H
#define PROFILDIALOG_H


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
#include "changeinformationsdialog.h"


class loading;
class MainPage;
class Login;

namespace Ui {
class profilDialog;
}

class profilDialog : public QDialog
{
    Q_OBJECT

public:
    explicit profilDialog(MainPage &mainPage, const QString &userName, QWidget *parent = nullptr);
    ~profilDialog();
    int getUserId(const QString &userName);

signals:
    void logoutRequested();

private slots:
    void on_cancelButton_clicked();

    void on_discoButton_clicked();

    void on_resetButton_clicked();

    void on_changeInfoButton_clicked();

private:
    Ui::profilDialog *ui;
    MainPage &mainPageRef;
    QSqlDatabase db;
    changeInformationsDialog *changeInfosDialogInstance;
};



#endif // PROFILDIALOG_H
