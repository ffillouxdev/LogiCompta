#include "orderdialog.h"
#include "ui_orderdialog.h"

orderDialog::orderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orderDialog)
{
    ui->setupUi(this);
}

orderDialog::~orderDialog()
{
    delete ui;
}
