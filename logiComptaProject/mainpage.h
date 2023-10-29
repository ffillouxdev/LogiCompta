#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>


#include "addvaluedialog.h"
#include "addrubriquesdialog.h"
#include "profildialog.h"



namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();
    void setUserName(const QString &userName);
    void logout();


private slots:
    void on_ProfilpushButton_clicked();

    void on_invoiceButton_clicked();

    void on_addSectionButton_clicked();

private:
    Ui::MainPage *ui;
    QString m_userName;
    profilDialog *profil;

};

#endif // MAINPAGE_H
