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


namespace Ui {
class profilDialog;
}

class profilDialog : public QDialog
{
    Q_OBJECT

public:
    explicit profilDialog(const QString &userName, QWidget *parent = nullptr);
    ~profilDialog();
    int getUserId(const QString &userName);

signals:
    void logoutRequested();

private slots:
    void on_cancelButton_clicked();

    void on_makeChangeButton_clicked();

    void on_discoButton_clicked();

    void on_resetButton_clicked();

    void on_changeInfoButton_clicked();

private:
    Ui::profilDialog *ui;
    QSqlDatabase db;
};



#endif // PROFILDIALOG_H
