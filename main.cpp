#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<reciever.h>
#include<Sender.h>
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
    Reciever *reciver =new Reciever();

    QObject::connect(sender,&Sender::shoutSignal,reciver,&Reciever::actionPerformedOn_Shout);
    qInfo()<<"emitting signal from " <<sender;
    emit sender->shoutSignal();

    return app.exec();
}
