/* Set, clear and toggle  the nth bit in a number*/
#include "stdio.h"
#include <iostream>
#include "string.h"
#include "math.h"
#include <algorithm>

using namespace std;

int setNthBit(int userinput, int position)
{
    return (userinput|(1<<position));
}

int clearNthBit(int userinput, int position)
{
    return (userinput &(~(1<<position)));
}

int toggleNthBit(int userinput, int position)
{
    return (userinput^(1<<position));
}

int removeRightmostSetbit(int userinput)
{
    return (userinput &(userinput - 1));
}

int main(void){
    int userInput, positionClear, positionSet, positionToggle;
    cout << "input a number " << endl;
    cin >> userInput;
    
    cout << "input postion to clear" << endl;
    cin >> positionClear;
    
    cout << "input postion to Set" << endl;
    cin >> positionSet;

    cout << "input postion to Toggle" << endl;
    cin >> positionToggle;

    int val1 = clearNthBit(userInput, positionClear);
    int val2 = setNthBit(userInput, positionSet);
    int val3 = toggleNthBit(userInput, positionToggle);
    int val4 = removeRightmostSetbit(userInput);

    cout << "The " << userInput << " after clear of " << positionClear << " is " << val1 << endl;
    cout << "The " << userInput << " after Set of " << positionSet << " is " << val2 << endl;
    cout << "The " << userInput << " after Toggle of " << positionSet << " is " << val3 << endl;
    cout << "The " << userInput << " after removal of rightmost Set Bit is " << val4 << endl;
}