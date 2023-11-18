#ifndef SECTIONLIST_H
#define SECTIONLIST_H

#include <QDialog>

namespace Ui {
class sectionList;
}

class sectionList : public QDialog
{
    Q_OBJECT

public:
    explicit sectionList(QWidget *parent = nullptr);
    ~sectionList();

private:
    Ui::sectionList *ui;
};

#endif // SECTIONLIST_H
