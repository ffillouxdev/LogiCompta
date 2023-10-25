#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "connexion_mysql.h"


#include <QMainWindow>


namespace Ui {
class Registration;
}


class Registration: public QMainWindow
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private slots:
    void on_CancelButton_clicked();

    void on_confirmButton_clicked();

private:
    Ui::Registration *ui;
};

#endif // REGISTRATION_H
