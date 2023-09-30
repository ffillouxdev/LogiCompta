#ifndef ADDVALUEDIALOG_H
#define ADDVALUEDIALOG_H

#include <QDialog>
#include <iostream>


namespace Ui {
class ADDvalueDialog;
}

class ADDvalueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ADDvalueDialog(QWidget *parent = nullptr);
    ~ADDvalueDialog();

private slots:
    void on_CancelpushButton_clicked();

    void on_acceptPushButton_clicked();

private:
    Ui::ADDvalueDialog *ui;
};

#endif // ADDVALUEDIALOG_H
