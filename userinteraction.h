#ifndef USERINTERACTION_H
#define USERINTERACTION_H

#include <QObject>

class UserInteraction : public QObject
{
    Q_OBJECT
public:
    explicit UserInteraction(QObject *parent = nullptr);
    void getInput();

signals:
    void InputTyped(const QString &query);
};

#endif // USERINTERACTION_H
