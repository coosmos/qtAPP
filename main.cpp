#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<sender.h>
#include<receiver.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("testActivity", "Main");
    Sender *sender =new Sender();
    Receiver *receiver=new Receiver();
    QObject::connect(sender,&Sender::shoutSignal,receiver,&Receiver::actionPerformedOnSignal);
    qInfo()<<"emmiting signal via sender" <<sender;
    emit sender->shoutSignal();



    return app.exec();
}
