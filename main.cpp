#include <QCoreApplication>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     return a.exec();
// }
//#include <QApplication>
//#include <QLabel>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

qDebug() << "Hello, World!";
    return app.exec();
}
