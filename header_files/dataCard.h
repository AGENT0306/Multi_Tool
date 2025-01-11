//
// Created by reitr on 1/11/2025.
//


#ifndef DATACARD_H
#define DATACARD_H

#include <QWidget>

class DataCard : public QWidget {
public:
    explicit DataCard(std::string nT, std::string nD, std::string nC, QWidget *parent = nullptr);


private:
    std::string *nTitle;
    std::string *nDate;
    std::string *nContent;
};

#endif //DATACARD_H
