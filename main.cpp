#include "mainwindow.h"
#include <QStackedWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Multi Tool");
    w.show();

    return a.exec();
}
