#include "../header_files/equation.h"
#include "QDebug"

Equation::Equation()
{
    baseEqu = "";
}

//Equation init function
Equation::Equation(std::string calcEqu)
{
    baseEqu = calcEqu;
    findSigns();
    findNums();
    findAns();
}

//just performs the operation given to it on the two numbers
double Equation::operations(double n1, double n2, char *op)
{
    double ans;
    if (*op == '*') {
        ans = n1 * n2;
    } else if (*op == '/') {
        ans = n1 / n2;
    } else if (*op == '+') {
        ans = n1 + n2;
    } else if (*op == '-') {
        ans = n1 - n2;
    } else {
        ans = 0.0;
    }

    return ans;
}

//this function calls the calculate function in a way to make sure
//pemdas is followed correctly
void Equation::findAns()
{
    char plus = '+';
    char minus = '-';
    char times = '*';
    char divide = '/';
    calculate(&times, &divide);
    calculate(&plus, &minus);
}

//this is the main calculate function, it takes in the two operators you want
//to use for that round of calculations
void Equation::calculate(char *op1, char *op2)
{
    int counter = 0;
    double num1;
    double num2;
    double ans;
    std::vector<double> temp = equNums;      //copies numbers in equation for reference
    std::vector<char> tempSign = signsInEqu; //copies signs in equation for reference

    for (auto x : tempSign) { //iterates through all of the signs in the current equation
        std::vector<double>::iterator it = equNums.begin();
        std::vector<double>::iterator it2 = equNums.begin();
        //qDebug() << "test";
        if (x == *op1 || x == *op2) { //this checks to see of the current sign being checked is
            //either op1 or op2. If yes it assgins the number of the current count
            //to num 1 then removes that number. Once that number is removed, the
            //next number is shifted to the last numbers position (i.e. equNums[2]
            //becomes equNums[1]).
            num1 = equNums[counter];
            equNums.erase(it + counter);
            num2 = equNums[counter];
            equNums.erase(it2 + counter);
            if (x == *op1) {
                ans = operations(num1, num2, op1);
                equNums.insert(it + counter, ans);
            } else if (x == *op2) {
                ans = operations(num1, num2, op2);
                equNums.insert(it + counter, ans);
            }
            signsInEqu.erase(signsInEqu.begin() + counter);
        } else {
            counter++;
        }
    }
}

//Finds all signs(char) in equation and the position(int) of those signs and
//stores the values in their repective vectors, i.e. signs = signsInEqu and postions = signPos
void Equation::findSigns()
{
    for (int z = 0; z < baseEqu.length(); z++) {
        if (std::isdigit(baseEqu.at(z)) == false) {
            signsInEqu.push_back(baseEqu.at(z));
            signPos.push_back(z);
        }
    }
}

//Finds all numbers in equation and converts to doubles before storing in a vector (equNums)
void Equation::findNums()
{
    int startIndex; //staring index for substr
    int numOfChars; //number of characters substr takes after the given index
    for (int z = 0; z < signPos.size() + 1; z++) {
        if (z == 0) { // sets up index and number of characters for the beginning of signPos vector
            startIndex = 0;
            numOfChars = signPos
                [z]; //Whatever the value of signPos[z] is minus zero doesn't change so the # of chars for the first interation is just equal to signPos[z]
        } else {
            startIndex
                = signPos[z - 1]
                  + 1; //takes the index of the former sign and adds 1 since substr starts at the index given and signPos[z - 1] would be a sign, not a number
            if (z == signPos.size()) {
                numOfChars
                    = baseEqu.size() - signPos[z - 1]
                      - 1; //essentally only runs to get the last number, does so by taking the length
                           //of the string minus the index of the last sign minus 1
            } else {
                numOfChars
                    = signPos[z] - signPos[z - 1]
                      - 1; //similar principal as above but does the index of the current sign minus
                    //the index of the last sign minus 1, the minus 1 is there b/c we want the
                    //length of the number between the two signs, not just the length between the two signs.
            }
        }
        std::string strNum = baseEqu.substr(startIndex, numOfChars);
        equNums.push_back(std::stod(strNum));
    }
}

void Equation::printData()
{
    qDebug() << signsInEqu;
    qDebug() << signPos;
    qDebug() << equNums;
}

double Equation::getAns()
{
    return equNums[0];
}
