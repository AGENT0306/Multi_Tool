//
// Created by reitr on 1/9/2025.
//
//#include <iostream>
#include "qdebug.h"
#include "../header_files/noteSelector.h"
#include "../header_files/dataCard.h"


NoteSelector::NoteSelector(pugi::xml_document* d, QWidget *parent) : QMainWindow(parent){
    doc = d;
    this->setGeometry(100,100,700,500);

    scroll = new QScrollArea(this);
    scroll->setWidgetResizable(true);
    scroll->setGeometry(0,0,600,400);

    w = new QWidget();
    scroll->setWidget(w);

    layout = new QVBoxLayout();
    w->setLayout(layout);
}

void NoteSelector::loadNotes() {
    //std::cout << "test";
    for (pugi::xpath_node entry : doc->select_nodes("//NoteBook/Note")) {
        std::string title = entry.node().child("Title").text().as_string();
        std::string date = entry.node().child("Date").text().as_string();
        std::string content = entry.node().child("Content").text().as_string();

        //std::cout << title << std::endl << date << std::endl << content << std::endl;
        DataCard* tmpData = new DataCard(title, date, content);
        layout->addWidget(tmpData);
    }
}