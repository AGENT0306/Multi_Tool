//
// Created by reitr on 1/9/2025.
//
#pragma once

#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QScrollArea>
#include "pugiXML/pugixml.hpp"

#ifndef NOTESELECTOR_H
#define NOTESELECTOR_H

class NoteSelector : public QMainWindow{

    Q_OBJECT

    public:
        explicit NoteSelector(pugi::xml_document* d, QWidget *parent = nullptr);

    private:
        pugi::xml_document* doc;
        QScrollArea* scroll;
        QWidget* w;
        QVBoxLayout* layout;
};

#endif //NOTESELECTOR_H
