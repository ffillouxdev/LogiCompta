#ifndef DELETESELECTEDROWSDIALOG_H
#define DELETESELECTEDROWSDIALOG_H

#include <QDialog>
class invoicesList;

namespace Ui {
class deleteSelectedRowsDialog;
}

class deleteSelectedRowsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit deleteSelectedRowsDialog(invoicesList &listInvoice, QWidget *parent = nullptr);
    ~deleteSelectedRowsDialog();

public slots:
    void closeDialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::deleteSelectedRowsDialog *ui;
    invoicesList &invoicesListRef;
};

#endif // DELETESELECTEDROWSDIALOG_H
