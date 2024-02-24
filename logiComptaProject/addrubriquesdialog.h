#ifndef ADDRUBRIQUESDIALOG_H
#define ADDRUBRIQUESDIALOG_H


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
class ADDrubriquesDialog;
}

class ADDrubriquesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ADDrubriquesDialog(const QString &userName, QWidget *parent = nullptr);
    ~ADDrubriquesDialog();
    int getUserId(const QString &userName);


private slots:
    void on_CancelpushButton_clicked();

    void on_AcceptpushButton_clicked();

private:
    Ui::ADDrubriquesDialog *ui;
    QSqlDatabase db;
    QString nameUser;
};

#endif // ADDRUBRIQUESDIALOG_H
