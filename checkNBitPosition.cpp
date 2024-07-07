/* Cheching the nth bit postion using bit manupulation */
#include "stdio.h"
#include <iostream>
#include "string.h"
#include "math.h"
#include <algorithm>

using namespace std;
/*using left shift and right shift operator*/
bool checkNthBit(int userInput, int userInputPos)
{
    if(userInput & (1<< userInputPos) != 0 )
        return true;
    else 
        return false;
    /*
    if((userInput >> userInputPos)&1)
    return true;
    else
    return false;
    */
}

int main(void){
    int userInput, userInputPos;
    cout << "input a number to check postion" << endl;
    cin >> userInput;
    cout << "input postion to check" << endl;
    cin >> userInputPos;
    bool val = checkNthBit(userInput, userInputPos);
    cout << "The " << userInputPos << " postion of " << userInput << " is " << val << endl;
}
