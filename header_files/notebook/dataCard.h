//
// Created by reitr on 1/11/2025.
//


#ifndef DATACARD_H
#define DATACARD_H

#include <QPushButton>
#include <QWidget>

class DataCard : public QPushButton {

    Q_OBJECT

public:
    explicit DataCard(std::string nT, std::string nD, std::string nC, QWidget *parent = nullptr);
    const std::string *nTitle;
    const std::string *nDate;
    const std::string *nContent;

signals:
    void customRelease(const std::string* nT, const std::string* nD, const std::string* nC);

private slots:
    void onRelease();
};

#endif //DATACARD_H
