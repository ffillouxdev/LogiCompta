#ifndef ORDERDIALOG_H
#define ORDERDIALOG_H

#include <QDialog>

namespace Ui {
class orderDialog;
}

class orderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit orderDialog(QWidget *parent = nullptr);
    ~orderDialog();

private:
    Ui::orderDialog *ui;
};

#endif // ORDERDIALOG_H
