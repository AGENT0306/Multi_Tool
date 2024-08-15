#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MainWindow *test;

private:
    Ui::MainWindow *ui;

private slots:
    void noteTakerpressed();
    void startCalcpressed();
};
#endif // MAINWINDOW_H
