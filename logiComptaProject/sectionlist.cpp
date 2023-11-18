#include "sectionlist.h"
#include "ui_sectionlist.h"

sectionList::sectionList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sectionList)
{
    ui->setupUi(this);
}

sectionList::~sectionList()
{
    delete ui;
}
