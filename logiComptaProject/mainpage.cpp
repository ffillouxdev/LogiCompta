#include "mainpage.h"
#include "ui_mainpage.h"

#include <iostream>
#include <QDialog>
using namespace std;


MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    setWindowTitle("LogiCompta");
    QMainWindow::showMaximized();

    //placeholder for LineEdit
    ui->counter->setPlaceholderText("0.0");
    ui->counter->setEnabled(false);


}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::on_invoiceButton_clicked()
{
    ADDvalueDialog *value = new ADDvalueDialog(m_userName);
    value->show();
}


void MainPage::on_ProfilpushButton_clicked()
{
    // Open user profil popup
    profilDialog *profil = new profilDialog(m_userName);
    connect(profil, &profilDialog::logoutRequested, this, &MainPage::logout);
    profil->show();

}

void MainPage::setUserName(const QString &userName)
{
    // Stockez la valeur du nom d'utilisateur dans une variable membre de la classe profilDialog
    m_userName = userName;
}

void MainPage::logout()
{
    close(); // Fermez la fenêtre MainPage
}

void MainPage::on_addSectionButton_clicked()
{
    ADDrubriquesDialog *rubrique = new ADDrubriquesDialog();
    rubrique->show();

}

