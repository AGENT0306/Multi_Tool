#include <iostream>
#include <math.h>
#include <QDebug>
#include "calc.h"
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

//NEXT ON TO DO LIST: make program follow PEMDAS correctly for eqation calc

using namespace std;

string plusSign = "+";
string minusSign = "-";
string multipySign = "*";
string divideSign = "/";

vector<string> signs{plusSign,minusSign,multipySign,divideSign};

double calc::equLogic(QString equation){
    string sEquation = equation.toStdString();
    double ans = 0;
    size_t pos = 0;
    size_t firstSignLoc = 0;
    int i = 0;
    int sizeOfEqu = sEquation.size();
    bool firstTime = true;

    checkagain:
    if(firstTime == false){
        pos = 0;
        firstSignLoc = 0;
        i = 0;
        sizeOfEqu = sEquation.size();
    }
    while(i < sizeOfEqu){
       if(isdigit(sEquation.at(i)) == false){
               firstSignLoc = i;
               break;
       }
       i++;
   }
   string firstSign = sEquation.substr(0, firstSignLoc + 1);
   for(auto&& i : signs){
       if(firstSign.find(i) != std::string::npos){
           pos = firstSign.find(i);
           string strFirstNum;
           string strSecondNum;
           if(firstTime == true){
               strFirstNum = sEquation.substr(0,pos);
           }else if(firstTime == false){
               strFirstNum = to_string(ans);
           }
           strSecondNum = sEquation.substr(pos + 1);
           double firstNum = stod(strFirstNum);
           double secondNum = stod(strSecondNum);
           if(i == "+"){
               ans = firstNum + secondNum;
           }else if(i == "-"){
               ans = firstNum - secondNum;
           }else if(i == "*"){
               ans = firstNum * secondNum;
           }else if(i == "/"){
               ans = firstNum / secondNum;
           }

           sEquation.erase(0, pos + 1);
           firstTime = false;
           goto checkagain;
       }
   }
    //qDebug() << "TESTTTTTTs";
    return ans;
}

