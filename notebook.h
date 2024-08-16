#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QMainWindow>
#include "mainwindow.h"
#include "savepopup.h"

namespace Ui {
class NoteBook;
}

class NoteBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit NoteBook(MainWindow *test, QWidget *parent = nullptr);
    std::string openFile();
    ~NoteBook();

private:
    SavePopUp *popWin = new SavePopUp;
    Ui::NoteBook *ui;
    MainWindow *mainWin;

private slots:
    void savepressed();
    void clearpressed();
    void backpressed();
    void openpressed();
};

#endif // NOTEBOOK_H
