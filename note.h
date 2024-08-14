#ifndef NOTE_H
#define NOTE_H

#include <string>
#include <iostream>

using namespace std;

class note
{
public:
    note(string data, string name);

private:
    string noteData;
    string noteName;

};

#endif // NOTE_H
