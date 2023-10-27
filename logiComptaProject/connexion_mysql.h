#ifndef CONNEXION_MYSQL_H
#define CONNEXION_MYSQL_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtCore>

//https://www.wampserver.com/
static bool reelconnexionDB()
{
    // Database
    qDebug() << QSqlDatabase::drivers(); //List of availables database drivers

    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("logicomptadb");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPort(3306);
    //db.setPassword("");
    if(db.open())
    {
        qDebug() << "Connected to MySQL!";
        return true;
    }
    else
    {
        qDebug() << "Failed to connect to MySQL!" /*<< db.lastError().text()*/;
        return false;
    }
}

#endif // CONNEXION_MYSQL_H
