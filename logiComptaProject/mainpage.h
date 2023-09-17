#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QMessageBox>



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

private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
