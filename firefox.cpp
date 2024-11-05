#include "firefox.h"
#include<qdebug.h>

Firefox::Firefox(QObject *parent)
    : QObject{parent}
{}

void Firefox::Browse()
{
    qDebug() <<"\n Displaying results for "
             <<"\n Result 1 "
             <<"\n Result 2"
             <<"\n Result 3";
}
