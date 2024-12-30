#ifndef NOTETAKER_H
#define NOTETAKER_H

#include <iostream>

using namespace std;

class notetaker
{
public:
    void saveToFile(string text);
    string openFile();
};

#endif // NOTETAKER_H
