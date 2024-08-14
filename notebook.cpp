#include "notebook.h"
#include "ui_notebook.h"
#include "QDebug"
#include <qstring.h>
#include <iostream>
#include <fstream>

using namespace std;

NoteBook::NoteBook(MainWindow *test,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoteBook)
{
    ui->setupUi(this);

    mainWin = test;

    connect(ui->saveNote,SIGNAL(released()),this,SLOT(savepressed()));
    connect(ui->clearNote,SIGNAL(released()),this,SLOT(clearpressed()));
    connect(ui->goBack,SIGNAL(released()),this,SLOT(backpressed()));
    connect(ui->openFile,SIGNAL(released()),this,SLOT(openpressed()));
}

NoteBook::~NoteBook()
{
    delete ui;
}

void NoteBook::savepressed(){
    QString currentText = ui->textEdit->toPlainText();
    string text = currentText.toStdString();
    saveToFile(text);
    /*fstream outfile;
    outfile.open("C:\\Personal Coding Projects\\QtStuff\\Multi_Tool\\test.txt");
    outfile << text << '\n';
    outfile.close();*/
}

void NoteBook::clearpressed(){
    ui->textEdit->clear();
}

void NoteBook::backpressed(){
    mainWin ->show();
    this->close();
}

void NoteBook::openpressed(){

}

void NoteBook::saveToFile(string text)
{
    auto currentTime = chrono::system_clock::now();
    time_t time = chrono::system_clock::to_time_t(currentTime);
    string timeNow = ctime(&time);
    //cout << timeNow;
    fstream outfile;
    outfile.open("C:\\Personal Coding Projects\\QtStuff\\Multi_Tool\\test.txt", ios_base::app);
    outfile << '\n' << "|" << '\n' << timeNow << '\n';
    outfile << text << '\n' << "|";
    outfile.close();
}

string NoteBook::openFile(){
    //qDebug << "it worked bro its open!";

    return "0";
}

