//
// Created by reitr on 1/9/2025.
//

#include <QMainWindow>
#include "pugiXML/pugixml.hpp"

#ifndef NOTESELECTOR_H
#define NOTESELECTOR_H

class NoteSelector : public QMainWindow{

    Q_OBJECT

    public:
        explicit NoteSelector(pugi::xml_document* d, QWidget *parent = nullptr);

    private:
        pugi::xml_document* doc;


};

#endif //NOTESELECTOR_H
