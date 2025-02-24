#include "../header_files/notebook/notebook.h"
#include "QDebug"
#include "ui_notebook.h"
#include <fstream>
#include <iostream>
#include <qstring.h>

using namespace std;

NoteBook::NoteBook(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NoteBook)
{
    ui->setupUi(this);

    doc = new pugi::xml_document();
    doc->load_file("C:/Coding_Projects/C++/Qt/Multi_Tool/notes.xml");

    noteSele = new NoteSelector(doc, this);
    noteSele->loadNotes();

    for (DataCard* d: noteSele->cards){
        connect(d, SIGNAL(customRelease(const std::string*,const std::string*,const std::string*)), this, SLOT(openFile(const std::string*,const std::string*,const std::string*)));
    }

    mainWin = parent;

    connect(ui->saveNote, SIGNAL(released()), this, SLOT(savepressed()));
    connect(ui->clearNote, SIGNAL(released()), this, SLOT(clearpressed()));
    connect(ui->goBack, SIGNAL(released()), this, SLOT(backpressed()));
    connect(ui->openFile, SIGNAL(released()), this, SLOT(openpressed()));
}

NoteBook::~NoteBook()
{
    delete ui;
}

void NoteBook::savepressed()
{
    popWin->show();
    QString currentText = ui->textEdit->toPlainText();
    string text = currentText.toStdString();
    popWin->getTxtFromWin(&text);
}

void NoteBook::clearpressed()
{
    ui->textEdit->clear();
}

void NoteBook::backpressed()
{
    mainWin->show();
    this->close();
}

void NoteBook::openpressed(){
    noteSele->show();
}

void NoteBook::openFile(const std::string* t,const std::string* d,const std::string* c){
    std::cout << *t << '\n' << *d << '\n' << *c << '\n';
}
