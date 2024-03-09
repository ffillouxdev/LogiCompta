#include "changeinformationsdialog.h"
#include "ui_changeinformationsdialog.h"

changeInformationsDialog::changeInformationsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeInformationsDialog)
{
    ui->setupUi(this);
}

changeInformationsDialog::~changeInformationsDialog()
{
    delete ui;
}
