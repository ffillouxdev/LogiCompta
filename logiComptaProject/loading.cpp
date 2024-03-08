#include "loading.h"
#include "ui_loading.h"

loading::loading(QWidget *parent) :
    QDialog(parent, Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint),
    ui(new Ui::loading)
{
    ui->setupUi(this);

    movie = new QMovie(":/res/loader.gif");
    movie->setScaledSize(QSize(70, 70));
    ui->LoadingInconLabel->setMovie(movie);
    ui->LoadingInconLabel->setAlignment(Qt::AlignCenter);
    movie->start();

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &loading::closeloading);
    timer->start(1500);
}

loading::~loading()
{
    delete ui;
    delete movie;
}

void loading::closeloading()
{
    movie->stop();
    close();
}
