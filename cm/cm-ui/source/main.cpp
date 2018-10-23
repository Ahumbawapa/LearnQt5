#include <QtGui/QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QQmlContext>

#include <controllers/mastercontroller.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    //register qml types
    qmlRegisterType<cm::controllers::MasterController>("CM", 1, 0, "MasterController");

    //create instance of Mastercontroller
    cm::controllers::MasterController masterController;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("masterController", &masterController);
    engine.load(QUrl(QStringLiteral("qrc:/views/MasterView.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
