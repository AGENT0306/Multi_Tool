#ifndef NOTE_H
#define NOTE_H

#include <iostream>
#include <string>

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
