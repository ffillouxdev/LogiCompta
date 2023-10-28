#ifndef PROFILDIALOG_H
#define PROFILDIALOG_H

#include <QDialog>

namespace Ui {
class profilDialog;
}

class profilDialog : public QDialog
{
    Q_OBJECT

public:
    explicit profilDialog(QWidget *parent = nullptr);
    ~profilDialog();

private slots:
    void on_cancelButton_clicked();

    void on_makeChangeButton_clicked();

    void on_discoButton_clicked();

    void on_resetButton_clicked();

    void on_changeInfoButton_clicked();

private:
    Ui::profilDialog *ui;
};

#endif // PROFILDIALOG_H
