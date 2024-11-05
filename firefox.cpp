#include "firefox.h"
#include<QDebug>

FireFox::FireFox(QObject *parent)
    : QObject{parent}
{}

void FireFox::Browse(const QString &query)
{
    qDebug() <<"\n Displaying results for "<<query
             <<"\n Result 1 "
             <<"\n Result 2"
             <<"\n Result 3";
}
