#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "userinteraction.h"
#include "firefox.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Instantiate and set up UserInteraction and FireFox
    UserInteraction usr;
    Firefox firefox;

    QObject::connect(&usr, &UserInteraction::InputTyped, &firefox, &Firefox::Browse);

    // Expose UserInteraction to QML
    engine.rootContext()->setContextProperty("inputHandler", &usr);

    engine.loadFromModule("testActivity", "Main");

    return app.exec();
}
