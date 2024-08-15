#ifndef CALC_H
#define CALC_H

#include <QMainWindow>
#include <QString>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class calc;
}
QT_END_NAMESPACE

class calc : public QMainWindow
{
    Q_OBJECT

public:
    explicit calc(MainWindow *test, QWidget *parent = nullptr);
    ~calc();

private:
    Ui::calc *ui;
    MainWindow *mainWin;
    double equLogic(QString equation);

private slots:
    void digit_pressed();
    void on_pushButton_dot_released();
    void clear_pressed();
    void unary_operation_pressed();
    void equals_pressed();
    void operator_pressed();
    void text_enter();
    void on_goBack_released();
};

#endif // CALC_H
