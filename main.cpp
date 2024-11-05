#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<userinteraction.h>
#include<firefox.h>

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
    UserInteraction *usr=new UserInteraction();
    FireFox *firefox= new FireFox();
    QObject::connect(usr,&UserInteraction::InputTyped,firefox,&FireFox::Browse);

    emit usr->InputTyped("hlw world this is my query");

    return app.exec();
}
