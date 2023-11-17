#ifndef ADDVALUEDIALOG_H
#define ADDVALUEDIALOG_H

#include <iostream>
#include <QDialog>
#include "connexion_sqlite.h"
#include "qsqldatabase.h"
#include <QDialog>
#include <QSql>
#include <QMessageBox>


namespace Ui {
class ADDvalueDialog;
}

class ADDvalueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ADDvalueDialog(const QString &userName, QWidget *parent = nullptr);
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
};

#endif // ADDVALUEDIALOG_H
