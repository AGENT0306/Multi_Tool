#include "../header_files/notetaker.h"
#include "QDebug"
#include <chrono>
#include <ctime>
#include <fstream>

using namespace std;

void notetaker::saveToFile(string text)
{
    auto currentTime = chrono::system_clock::now();
    time_t time = chrono::system_clock::to_time_t(currentTime);
    string timeNow = ctime(&time);
    //cout << timeNow;
    fstream outfile;
    outfile.open("C:\\Personal Coding Projects\\QtStuff\\Multi_Tool\\test.txt", ios_base::app);
    outfile << '\n' << "|" << '\n' << timeNow << '\n';
    outfile << text << '\n' << "|";
    outfile.close();
}

string notetaker::openFile()
{
    //qDebug << "it worked bro its open!";

    return "0";
}
