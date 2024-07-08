/* 
Min number of bit flips required to reach from the start to the goal
example 1: start = 10, end = 7
10: 1010
7 : 0111
bit flips required are 3
*/
#include "stdio.h"
#include <iostream>
#include "string.h"
#include "math.h"
#include <algorithm>

using namespace std;

int minBitFlipReq(int start, int goal)
{
    int count = 0;
    int temp = start^goal;
    while(temp != 0)
    {
        temp = (temp) & (temp-1);
        count++;
    }
    return count;
}

int main(void)
{
    int userInputStart, userInputGoal;
    cout << "input a number to start " << endl;
    cin >> userInputStart;
    
    cout << "input the goal number" << endl;
    cin >> userInputGoal;

    cout << "the number of bit flips required to reach from start to goal is :"<< minBitFlipReq(userInputStart, userInputGoal) << endl;
}