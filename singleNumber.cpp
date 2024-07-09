/* Return the number which appears only once in the array or list and ignore the rest */
#include "stdio.h"
#include "string.h"
#include "math.h"
#include <algorithm>
#include <iostream>

using namespace std;

int findSingleOccurance(int* arr, int length)
{
    int XOR = 0;
    for(int i = 0 ; i < length ; i++)
    {
        XOR = XOR^arr[i]; // XOR with the same number returns zero so after operating we are left with the number whose occurance is just one
    }
    return XOR;
}

int main(void)
{
    int userInputArray[5] = {4, 1, 2, 1, 2};
    
    cout << "The number which occurs only once is : "<< findSingleOccurance(userInputArray, 5) << endl;
}