//
// Created by reitr on 1/11/2025.
//
#include "header_files/dataCard.h"

DataCard::DataCard(std::string nT, std::string nD, std::string nC, QWidget *parent) : QWidget(parent){
    nTitle = &nT;
    nDate = &nD;
    nContent = &nC;
}