#ifndef FIREFOX_H
#define FIREFOX_H

#include <QObject>

class FireFox : public QObject
{
    Q_OBJECT
public:
    explicit FireFox(QObject *parent = nullptr);

signals:


public slots:
    void Browse(const QString &query);
};

#endif // FIREFOX_H
