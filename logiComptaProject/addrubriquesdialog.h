#ifndef ADDRUBRIQUESDIALOG_H
#define ADDRUBRIQUESDIALOG_H

#include <QDialog>

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
};

#endif // ADDRUBRIQUESDIALOG_H
