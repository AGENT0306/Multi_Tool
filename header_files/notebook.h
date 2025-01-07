#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QMainWindow>
#include "opennote.h"
#include "mainwindow.h"
#include "savepopup.h"
#include "pugiXML/pugixml.hpp"

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
    OpenNote *openWin = new OpenNote;
    Ui::NoteBook *ui;
    MainWindow *mainWin;
    pugi::xml_document *doc;

private slots:
    void savepressed();
    void clearpressed();
    void backpressed();
    void openpressed();
};

#endif // NOTEBOOK_H
