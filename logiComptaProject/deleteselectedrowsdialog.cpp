#include "deleteselectedrowsdialog.h"
#include "ui_deleteselectedrowsdialog.h"
#include "invoiceslist.h"
deleteSelectedRowsDialog::deleteSelectedRowsDialog(invoicesList &listInvoice, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteSelectedRowsDialog),
    invoicesListRef(listInvoice)
{
    ui->setupUi(this);
    connect(&listInvoice, &invoicesList::dialogClosed, this, &deleteSelectedRowsDialog::closeDialog);
}

deleteSelectedRowsDialog::~deleteSelectedRowsDialog()
{
    delete ui;
}

void deleteSelectedRowsDialog::on_okButton_clicked()
{
    invoicesListRef.deleteSelectedRowsFromDatabase();
    this->close();
}


void deleteSelectedRowsDialog::on_cancelButton_clicked()
{
    this->close();
}

void deleteSelectedRowsDialog::closeDialog()
{
    this->close();
}
