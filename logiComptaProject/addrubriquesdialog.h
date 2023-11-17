#ifndef ADDRUBRIQUESDIALOG_H
#define ADDRUBRIQUESDIALOG_H

#include "connexion_sqlite.h"
#include "qsqldatabase.h"
#include <QDialog>
#include <QSql>
#include <QMessageBox>

namespace Ui {
class ADDrubriquesDialog;
}

class ADDrubriquesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ADDrubriquesDialog(QWidget *parent = nullptr);
    ~ADDrubriquesDialog();

private slots:
    void on_CancelpushButton_clicked();

    void on_AcceptpushButton_clicked();

private:
    Ui::ADDrubriquesDialog *ui;
    QSqlDatabase db;
};

#endif // ADDRUBRIQUESDIALOG_H
