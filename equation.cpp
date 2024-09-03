#include "equation.h"
#include "QDebug"

Equation::Equation() {
    baseEqu = "";
}

//Equation init function
Equation::Equation(std::string calcEqu){
    baseEqu = calcEqu;
    findSigns();
    findNums();
}

//Finds all signs(char) in equation and the position(int) of those signs and
//stores the values in their repective vectors, i.e. signs = signsInEqu and postions = signPos
void Equation::findSigns(){
    for(int z = 0; z < baseEqu.length(); z++){
        if(std::isdigit(baseEqu.at(z)) == false){
            signsInEqu.push_back(baseEqu.at(z));
            signPos.push_back(z);
        }
    }
}

void Equation::findNums(){

}

void Equation::printData(){
    qDebug() << signsInEqu;
    qDebug() << signPos;
}
