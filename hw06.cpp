/***************************************************************
*   AUTHOR              : ESSA BULOUSHI
*   Assignemt #6        : Recursive
*   Class               : CS1C
*   Section             : Mon-Thurs 3-5:20
*   Due Date            : 06/26/23
****************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include "recursive.h"
using namespace std;
//Essa Buloushi                 CS1C
//
/**************************************************************
 * RECURSIVE
 * ------------------------------------------------------------
 * This program uses recursion to flip the order of 
 * an inputted string
 * ------------------------------------------------------------
 * INPUTS
 *  string myString  = "abcdef"
 * 
 *  OUTPUTS
 *  Reordered version string
 *
 * * ************************************************************/

int main()
{
   
    string myString = "abcdefghijklmnopqrstuvwxyz";
    string myString2 = "abcdefghijklmnopqrstuvwxyz";
    string myString3 = "abcdefghijklmnopqrstuvwxyz";


    for(int i = 0; i < myString.length(); i++)
    {
        cout << myString.at(i);
    }
    cout << "\n----------------------------------------------------------\n";
    cout << "\nExecuting first swap of characters #12-19." << endl;
    recursive(myString,12,19);
     for(int i = 0; i < myString.length(); i++)
    {
        cout << myString.at(i);
    }
        cout << "\n----------------------------------------------------------\n";

    cout << "\nExecuting second swap of characters #5-23." << endl;
    recursive(myString2,5,23);
     for(int i = 0; i < myString.length(); i++)
    {
        cout << myString2.at(i);
    }
    cout << "\n----------------------------------------------------------\n";
    cout << "\nReturning alphabet back to normal: " << endl;
    recursive(myString3,1,26);
     for(int i = 0; i < myString.length(); i++)
    {
        cout << myString3.at(i);
    }
    cout << endl;
    return 0;
}