#include "stdio.h"
#include <iostream>
#include "string.h"
#include "math.h"
#include <algorithm>
using namespace std;

//function declaration
string convert2Binary(int num);
int convert2Integer(string num2);

int convert2Integer(string num2)
{
    int res = 0;
    int pow = 1;
    for(int i = num2.length() - 1 ; i>=0 ; i--)
    {
        res = res + (num2[i] -'0')*pow;
        pow = pow*2;
    }
    return res;
}
string convert2Binary(int num)
{
    string res ="";
    while(num != 0)
    {
        if(num%2 == 1) {res += "1";}
        else {res += "0";}
        num = num/2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(void)
{
    int input;
    string input2;
    cout << "Input a number to be converted to binary : ";
    cin >> input;
    cout << "Binary of " << input << "  is : "<< convert2Binary(input) << endl;
        
    cout << "Input a number to be converted to integer : ";
    cin >> input2;
    cout << "Integer of " << input2 << "  is : "<< convert2Integer(input2) << endl;
    return 0;
}