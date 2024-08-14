#include "calc.h"
//#include "iostream"
#include "./ui_calc.h"
using namespace std;

double firstNum;

calc::calc(MainWindow *test,QWidget *parent)
    :QMainWindow(parent)
    , ui(new Ui::calc)
{
    ui->setupUi(this);

    mainWin = test;

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_clear,SIGNAL(released()),this,SLOT(clear_pressed()));

    connect(ui->pushButton_equals,SIGNAL(released()),this,SLOT(equals_pressed()));

    connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(operator_pressed()));
    connect(ui->pushButton_subtract,SIGNAL(released()),this,SLOT(operator_pressed()));
    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(operator_pressed()));
    connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(operator_pressed()));

    connect(ui->pushButton_sign,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(text_enter()));

    connect(ui->goBack,SIGNAL(released()),this,SLOT(on_goBack_released()));
}

calc::~calc(){
    delete ui;
}

void calc::digit_pressed(){
    //qDebug() << "test";
    QPushButton * button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if(ui->pushButton_equals->isChecked()){
        ui->label->setText(ui->label->text() = "");
        ui->pushButton_equals->setChecked(false);
    }

    labelNumber = (ui->label->text() + button->text()).toDouble();
    newLabel = QString::number(labelNumber,'g',15);

    ui->label->setText(newLabel);
}


void calc::on_pushButton_dot_released()
{
    QString currentLabel = ui->label->text();
    if(!currentLabel.contains(".")){
        ui->label->setText(ui->label->text() + ".");
    }
}

void calc::clear_pressed()
{
    ui->label->setText(ui->label->text() = "");
}

void calc::unary_operation_pressed()
{
    QPushButton * button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;

    if(button->text() == "+/-"){
        labelNumber = (ui->label->text()).toDouble();
        labelNumber *= -1;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }else if(button ->text() == "%"){
        labelNumber = (ui->label->text()).toDouble();
        labelNumber *= 0.01;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }
}

void calc::operator_pressed()
{
    QPushButton * button = (QPushButton*) sender();

    firstNum = (ui->label->text()).toDouble();

    ui->label->setText(ui->label->text() = "");

    button->setChecked(true);

    //qDebug() << firstNum;
}

void calc::equals_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble();

    if(ui->pushButton_add->isChecked()){
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_add->setChecked(false);
    }else if(ui->pushButton_subtract->isChecked()){
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_subtract->setChecked(false);
    }else if(ui->pushButton_divide->isChecked()){
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_divide->setChecked(false);
    }else if(ui->pushButton_multiply->isChecked()){
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->pushButton_multiply->setChecked(false);
    }

    button->setChecked(true);
}

void calc::text_enter(){
    QLineEdit * line = (QLineEdit*)sender();

    QString currentText = line->text();
    //qDebug() << currentText;
    QString answer = QString::number(calc::equLogic(currentText));

    ui->label->setText(answer);
}

void calc::on_goBack_released()
{
    mainWin ->show();
    this->close();
}

