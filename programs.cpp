#include "programs.h"
#include "ui_programs.h"

programs::programs(QWidget *parent)
    : QStackedWidget(parent)
    , ui(new Ui::programs)
{
    ui->setupUi(this);
}

programs::~programs()
{
    delete ui;
}
