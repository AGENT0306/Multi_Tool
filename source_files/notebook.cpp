#include "../header_files/notebook.h"
#include "QDebug"
#include "ui_notebook.h"
#include <fstream>
#include <iostream>
#include <qstring.h>

using namespace std;

NoteBook::NoteBook(MainWindow *test, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NoteBook)
{
    ui->setupUi(this);

    doc = new pugi::xml_document();
    doc->load_file("C:/Coding_Projects/C++/Qt/Multi_Tool/notes.xml");

    mainWin = test;

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
    //delete this; //will test if this actually deletes object later
}

void NoteBook::openpressed()
{
    openWin->show();
}

string NoteBook::openFile()
{
    //qDebug << "it worked bro its open!";

    return "0";
}
