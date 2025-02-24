#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QMainWindow>
#include "savepopup.h"
#include "../../pugiXML/pugixml.hpp"
#include "noteSelector.h"

namespace Ui {
class NoteBook;
}

class NoteBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit NoteBook(QWidget *parent);
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
    void openFile(const std::string* t, const std::string* d, const std::string* c);
};

#endif // NOTEBOOK_H
