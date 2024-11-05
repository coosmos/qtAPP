#include "userinteraction.h"
#include<QDebug>
UserInteraction::UserInteraction(QObject *parent)
    : QObject{parent}
{}
void UserInteraction::handleInput(const QString &query)
{
    if (!query.isEmpty()) {
        emit InputTyped(query);
    }
}
