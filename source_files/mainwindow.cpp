#include "../header_files/mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
#include <qstring.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    n = new NoteBook(this);
    c = new calc(this);

    connect(ui->startNoteTaker, SIGNAL(released()), this, SLOT(noteTakerpressed()));
    connect(ui->startCalculator, SIGNAL(released()), this, SLOT(startCalcpressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::noteTakerpressed()
{
    n->show();
    this->hide();
    n->setWindowTitle("NoteTaker");
}

void MainWindow::startCalcpressed()
{
    c->show();
    this->hide();
    c->setWindowTitle("Calculator");
}
