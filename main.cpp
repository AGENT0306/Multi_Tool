#include <QApplication>
#include <QStackedWidget>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Multi Tool");
    w.show();

    return a.exec();
}
