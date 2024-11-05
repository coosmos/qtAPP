#include "receiver.h"

Receiver::Receiver(QObject *parent)
    : QObject{parent}
{}

void Receiver::actionPerformedOnSignal()
{
    qInfo()<<"performing  some action after signal" ;
}
