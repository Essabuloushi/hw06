#include "recursive.h"
string recursive(string &myString, int num1, int num2) 
{
    if ((num1) < (num2) )
    {
        char temp = myString.at(num1 - 1);
        myString.at(num1 - 1) = myString.at(num2 - 1);
        myString.at(num2 - 1) = temp;
        return recursive(myString, num1 + 1, num2 - 1);
    } 
    else {
        return myString;
    }
}
