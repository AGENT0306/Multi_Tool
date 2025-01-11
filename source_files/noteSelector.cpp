//
// Created by reitr on 1/9/2025.
//

#include "../header_files/noteSelector.h"

NoteSelector::NoteSelector(pugi::xml_document* d, QWidget *parent) : QMainWindow(parent){
    doc = d;
    this->setGeometry(100,100,700,500);

    scroll = new QScrollArea(this);
    scroll->setWidgetResizable(true);
    scroll->setGeometry(0,0,700,500);

    w = new QWidget();
    scroll->setWidget(w);

    layout = new QVBoxLayout();
    w->setLayout(layout);
}