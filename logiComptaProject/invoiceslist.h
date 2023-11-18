#ifndef INVOICESLIST_H
#define INVOICESLIST_H

#include <QDialog>

namespace Ui {
class invoicesList;
}

class invoicesList : public QDialog
{
    Q_OBJECT

public:
    explicit invoicesList(QWidget *parent = nullptr);
    ~invoicesList();

private:
    Ui::invoicesList *ui;
};

#endif // INVOICESLIST_H
