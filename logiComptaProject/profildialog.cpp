#include "profildialog.h"
#include "ui_profildialog.h"
#include "mainwindow.h"


#include <QMessageBox>

profilDialog::profilDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profilDialog)
{
    ui->setupUi(this);
    setWindowTitle("Profil");

}

profilDialog::~profilDialog()
{
    delete ui;
}

void profilDialog::on_cancelButton_clicked()
{
    this->close();
}


void profilDialog::on_makeChangeButton_clicked()
{
    // the button change all the user informations who have been change
    this->close();
}


void profilDialog::on_discoButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"ComptaPro","Are you sure to disconnect ?", QMessageBox::Yes |QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        this->hide();
        MainWindow *mainWindow = new  MainWindow();
        mainWindow->show();
    }
}


void profilDialog::on_resetButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"ComptaPro","Are you sure to delete all of the data ?", QMessageBox::Yes |QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        // Drop all the data of the database with a commande and reset all element who interract with this data like counter


    }
}
