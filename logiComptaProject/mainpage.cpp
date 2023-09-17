#include "mainpage.h"
#include "mainwindow.h"
#include "ui_mainpage.h"

MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    setWindowTitle("LogiCompta");
    QMainWindow::showMaximized();
}

MainPage::~MainPage()
{
    delete ui;
}



// Action when the button discoButton is clicked
void MainPage::on_discoButton_clicked()
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

// Action when the button resetButton is clicked
void MainPage::on_resetButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"ComptaPro","Are you sure to delete all of the data ?", QMessageBox::Yes |QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        // Drop all the data of the database with a commande and reset all element who interract with this data like counter


    }
}

