#ifndef LOADING_H
#define LOADING_H

#include <QtWidgets>
#include <QMovie>

namespace Ui {
class loading;
}

class loading : public QDialog {
    Q_OBJECT

public:
    explicit loading(QWidget *parent = nullptr);
    ~loading();
    void closeloading();


private:
    Ui::loading *ui;
    QMovie *movie;

signals:
    void closed();
};

#endif // LOADING_H
