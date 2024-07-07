/*Swap two numbers without using a temp variable using XOR functionality */
/* XOR  -> even no of 1s --> 0
        -> odd no of 1s --> 1
*/
#include "stdio.h"
#include <iostream>
#include "string.h"
#include "math.h"
#include <algorithm>

using namespace std;

int main(void){
    int a = 10;
    int b = 55;
    cout << "a = " << a << " , b = " << b << endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout << "a = " << a << " , b = " << b << endl;
}
