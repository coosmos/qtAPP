#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include<qdebug.h>

class Receiver : public QObject
{
    Q_OBJECT
public:
    explicit Receiver(QObject *parent = nullptr);

signals:

public slots:
    void actionPerformedOnSignal();
};

#endif // RECEIVER_H
