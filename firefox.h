#ifndef FIREFOX_H
#define FIREFOX_H

#include <QObject>

class FireFox : public QObject
{
    Q_OBJECT
public:
    explicit FireFox(QObject *parent = nullptr);

signals:
};

#endif // FIREFOX_H
