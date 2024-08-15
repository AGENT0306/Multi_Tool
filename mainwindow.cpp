#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
#include "calc.h"
#include "notebook.h"
#include <fstream>
#include <iostream>
#include <qstring.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->startNoteTaker, SIGNAL(released()), this, SLOT(noteTakerpressed()));
    connect(ui->startCalculator, SIGNAL(released()), this, SLOT(startCalcpressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::noteTakerpressed()
{
    /*QWidget * notetaker = ui->notetaker;
   ui->stackedWidget->setCurrentWidget(notetaker);*/
    NoteBook *n = new NoteBook(this);
    n->show();
    this->close();
    n->setWindowTitle("NoteTaker");
}

void MainWindow::startCalcpressed()
{
    calc *c = new calc(this);
    //qDebug() << "test";
    c->show();
    this->close();
    c->setWindowTitle("Calculator");
}
