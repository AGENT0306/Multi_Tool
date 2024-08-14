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
    popWin->show();
    QString currentText = ui->textEdit->toPlainText();
    string text = currentText.toStdString();
    popWin->getTxtFromWin(&text);
}

void NoteBook::clearpressed(){
    ui->textEdit->clear();
}

void NoteBook::backpressed(){
    mainWin->show();
    this->close();
}

void NoteBook::openpressed(){

}

/*void NoteBook::saveToFile(string text)
{
    auto currentTime = chrono::system_clock::now();
    time_t time = chrono::system_clock::to_time_t(currentTime);
    string timeNow = ctime(&time);
    //cout << timeNow;
    ofstream txtfile;
    txtfile.open("C:\\Personal Coding Projects\\QtStuff\\Multi_Tool\\test.txt", ios_base::app);
    txtfile << '\n' << "|" << '\n' << timeNow << '\n';
    txtfile << text << '\n' << "|";
    txtfile.close();
}*/

string NoteBook::openFile(){
    //qDebug << "it worked bro its open!";

    return "0";
}

