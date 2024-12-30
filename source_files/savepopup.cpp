#include "../header_files/savepopup.h"
#include "QDebug"
#include "ui_savepopup.h"
#include <cctype>
#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

SavePopUp::SavePopUp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SavePopUp)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(released()), this, SLOT(donePressed()));

    ui->errorWhiteSpace->setVisible(false);
}

SavePopUp::~SavePopUp()
{
    delete ui;
}

void SavePopUp::donePressed()
{
    bool containsWhiteSpace = false;
    title = ui->textEdit->toPlainText().toStdString();
    for (auto ch : title) {
        if (isspace(ch) != 0) {
            ui->errorWhiteSpace->setVisible(true);
            containsWhiteSpace = true;
            break;
        }
    }
    if (containsWhiteSpace == false) {
        createNoteFile();
        this->close();
    }
}

void SavePopUp::createNoteFile()
{
    ofstream file;
    file.open("C:\\Personal Coding Projects\\QtStuff\\Multi_Tool\\Notes\\" + title + ".txt",
              ios_base::app);
    file << *winTxt;
    file.close();
}

void SavePopUp::getTxtFromWin(std::string *noteTxt)
{
    *winTxt = *noteTxt;
}
