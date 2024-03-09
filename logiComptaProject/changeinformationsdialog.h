#ifndef CHANGEINFORMATIONSDIALOG_H
#define CHANGEINFORMATIONSDIALOG_H

#include <QDialog>

namespace Ui {
class changeInformationsDialog;
}

class changeInformationsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit changeInformationsDialog(QWidget *parent = nullptr);
    ~changeInformationsDialog();

private:
    Ui::changeInformationsDialog *ui;
};

#endif // CHANGEINFORMATIONSDIALOG_H
