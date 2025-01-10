#ifndef NOTE_H
#define NOTE_H

#include <iostream>
#include <string>
#include <pugiXML/pugixml.hpp>

using namespace std;

class note
{
public:
    note(string data, string name);

private:
    pugi::xml_node node;
    string noteData;
    string noteName;
};

#endif // NOTE_H
