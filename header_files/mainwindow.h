#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../header_files/calc.h"
#include "../header_files/notebook.h"

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

private:
    calc *c;
    NoteBook *n;
    Ui::MainWindow *ui;

private slots:
    void noteTakerpressed();
    void startCalcpressed();
};
#endif // MAINWINDOW_H
