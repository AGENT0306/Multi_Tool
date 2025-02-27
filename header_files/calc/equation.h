#ifndef EQUATION_H
#define EQUATION_H

#include <cctype>
#include <math.h>
#include <string>
#include <vector>

class Equation
{
public:
    Equation();
    Equation(std::string calcEqu);
    void printData();
    double getAns();

private:
    std::string baseEqu;
    std::vector<char> signsInEqu;
    std::vector<int> signPos;
    std::vector<double> equNums;
    void findSigns();
    void findNums();
    void findAns();
    void calculate(char *op1, char *op2);
    double operations(double n1, double n2, char *op);
};

#endif // EQUATION_H
