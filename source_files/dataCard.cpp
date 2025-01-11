//
// Created by reitr on 1/11/2025.
//
#include "header_files/dataCard.h"

#include <QLabel>

DataCard::DataCard(std::string nT, std::string nD, std::string nC, QWidget *parent) : QWidget(parent){
    nTitle = &nT;
    nDate = &nD;
    nContent = &nC;

    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    this->setGeometry(0,0,600,100);

    QLabel *lTitle, *lDate, *lContent;

    lTitle = new QLabel(this);
    lTitle->setText(QString::fromStdString(*nTitle));
    lTitle->setGeometry(0,50,100,20);


    lDate = new QLabel(this);
    lDate->setText(QString::fromStdString(*nDate));
    lDate->setGeometry(200,50,100,20);

    lContent = new QLabel(this);
    lContent->setText(QString::fromStdString(*nContent));
    lContent->setGeometry(400,50,100,20);
}
