#include "savepopup.h"
#include "ui_savepopup.h"
#include <iostream>
#include <fstream>
#include "QDebug"

using namespace std;

SavePopUp::SavePopUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SavePopUp)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(released()),this,SLOT(donePressed()));
}

SavePopUp::~SavePopUp()
{
    delete ui;
}

void SavePopUp::donePressed(){
    if(ui->textEdit->toPlainText() == " "){
        ;
    }else{
        string noteName = ui->textEdit->toPlainText().toStdString();
        ofstream file;
        file.open("C:\\Personal Coding Projects\\QtStuff\\Multi_Tool\\"+noteName+".txt", ios_base::app);
        //qDebug() << QString::fromStdString(*winTxt);
        file << *winTxt;
        file.close();
        this->close();
    }
}

void SavePopUp::getTxtFromWin(std::string *noteTxt){
    winTxt = noteTxt;
}
