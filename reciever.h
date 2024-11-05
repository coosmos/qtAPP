#ifndef RECIEVER_H
#define RECIEVER_H

#include <QObject>
#include<QDebug>

class Reciever : public QObject
{
    Q_OBJECT
public:
    explicit Reciever(QObject *parent = nullptr);

signals:

public slots:
    void actionPerformedOn_Shout();
};

#endif // RECIEVER_H
