#ifndef FIREFOX_H
#define FIREFOX_H

#include<QDebug>
#include <QObject>

class Firefox : public QObject
{
    Q_OBJECT
public:
    explicit Firefox(QObject *parent = nullptr);
public slots:
    void  Browse();
signals:
};

#endif // FIREFOX_H
