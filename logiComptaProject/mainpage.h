#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
//#include <QtSql>
//#include <QtSqlDatabase>

#include "addvaluedialog.h"


namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_discoButton_clicked();

    void on_resetButton_clicked();

    void on_addFactButton_clicked();

private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
