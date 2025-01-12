#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QMainWindow>
#include "../header_files/savepopup.h"
#include "pugiXML/pugixml.hpp"
#include "../header_files/noteSelector.h"

namespace Ui {
class NoteBook;
}

class NoteBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit NoteBook(QWidget *parent);
    std::string openFile();
    ~NoteBook();

private:
    SavePopUp *popWin = new SavePopUp;
    Ui::NoteBook *ui;
    QWidget *mainWin;
    pugi::xml_document *doc;
    NoteSelector *noteSele;

private slots:
    void savepressed();
    void clearpressed();
    void backpressed();
    void openpressed();
};

#endif // NOTEBOOK_H
