//
// Created by reitr on 1/9/2025.
//
#pragma once

#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QScrollArea>
#include "dataCard.h"
#include "../../pugiXML/pugixml.hpp"

#ifndef NOTESELECTOR_H
#define NOTESELECTOR_H

class NoteSelector : public QMainWindow{

    Q_OBJECT

    public:
        explicit NoteSelector(pugi::xml_document* d, QWidget *parent = nullptr);
        void loadNotes();
        std::vector<DataCard*> cards;

    private:
        pugi::xml_document* doc;
        QWidget *mainWin;
        QScrollArea* scroll;
        QWidget* w;
        QVBoxLayout* layout;


private slots:
    void notePressed();
};

#endif //NOTESELECTOR_H
