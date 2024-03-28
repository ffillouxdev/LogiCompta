#include "orderdialog.h"
#include "ui_orderdialog.h"
#include "invoiceslist.h"

orderDialog::orderDialog(invoicesList &listInvoice, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orderDialog),
    invoicesListRef(listInvoice)
{
    ui->setupUi(this);

    connect(&listInvoice, &invoicesList::dialogClosed, this, &orderDialog::closeDialog);

}

orderDialog::~orderDialog()
{
    delete ui;
}

void orderDialog::on_okButton_clicked()
{
    QString value = ui->OrdercomboBox->currentText();
    //qDebug() << value;
    if(value.compare("Trier par ordre Croissant") == 0 ){
        invoicesListRef.OrderTableUpdate(1);
        //qDebug() << "choix 1";
        this->close();
    }else if(value.compare("Trier par ordre Décroissant") == 0 ){
        invoicesListRef.OrderTableUpdate(2);
        //qDebug() << "choix 2";
        this->close();
    }
}


void orderDialog::on_cancelButton_clicked()
{
    this->close();
}


void orderDialog::closeDialog()
{
    this->close();
}
