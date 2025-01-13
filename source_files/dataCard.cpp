//
// Created by reitr on 1/11/2025.
//
#include "header_files/dataCard.h"

#include <QLabel>

DataCard::DataCard(std::string nT, std::string nD, std::string nC, QWidget *parent) : QPushButton(parent){
    nTitle = &nT;
    nDate = &nD;
    nContent = &nC;

    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    this->setGeometry(0,0,600,100);

    QLabel *lTitle, *lDate;

    lTitle = new QLabel(this);
    lTitle->setText(QString::fromStdString(*nTitle));
    lTitle->setGeometry(0,50,100,20);


    lDate = new QLabel(this);
    lDate->setText(QString::fromStdString(*nDate));
    lDate->setGeometry(200,50,100,20);
}
