#ifndef ORDERDIALOG_H
#define ORDERDIALOG_H

#include <QDialog>

class invoicesList;

namespace Ui {
class orderDialog;
}

class orderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit orderDialog(invoicesList &listInvoice, QWidget *parent = nullptr);
    ~orderDialog();

private slots:

    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::orderDialog *ui;
    invoicesList &invoicesListRef;
};

#endif // ORDERDIALOG_H
