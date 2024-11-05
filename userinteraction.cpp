#include "userinteraction.h"
#include<QTextStream>
#include<QDebug>
UserInteraction::UserInteraction(QObject *parent)
    : QObject{parent}
{}

void UserInteraction::getInput()
{
    qDebug()<<"\n Type in your search query";
    QTextStream s(stdin);
    const auto &query=s.readLine();
    if(!query.isEmpty()){
        emit InputTyped(query);

    }
}
