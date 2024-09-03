#ifndef EQUATION_H
#define EQUATION_H

#include <math.h>
#include <string>
#include <vector>
#include <cctype>

class Equation
{
public:
    Equation();
    Equation(std::string calcEqu);
    void printData();
private:
    std::string baseEqu;
    std::vector<char> signsInEqu;
    std::vector<int> signPos;
    void findSigns();
    void findNums();
};

#endif // EQUATION_H
