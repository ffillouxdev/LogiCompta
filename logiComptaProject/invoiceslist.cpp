#include "invoiceslist.h"
#include "ui_invoiceslist.h"

invoicesList::invoicesList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::invoicesList)
{
    ui->setupUi(this);
}

invoicesList::~invoicesList()
{
    delete ui;
}
