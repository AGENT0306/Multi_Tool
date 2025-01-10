//
// Created by reitr on 1/9/2025.
//

#include "../header_files/noteSelector.h"

NoteSelector::NoteSelector(pugi::xml_document* d, QWidget *parent) : QMainWindow(parent){
    doc = d;
}