#include "reciever.h"

Reciever::Reciever(QObject *parent)
    : QObject{parent}
{}

void Reciever::actionPerformedOn_Shout()
{
    qInfo()<<"executing slot from this "<<this ;
}
