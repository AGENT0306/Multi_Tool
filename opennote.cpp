#include "opennote.h"
#include "ui_opennote.h"

OpenNote::OpenNote(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OpenNote)
{
    ui->setupUi(this);
}

OpenNote::~OpenNote()
{
    delete ui;
}
