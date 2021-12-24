/*

in signed-int one bit is reserved which tells us whether the number that we have enterd is positive or 
negative,

but in the case of unsigned bit, no such number exists

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << INT_MAX << endl;
    int a = (1ll << 31) - 1;
    cout << a << endl;
    unsigned int b = (1ll << 32) - 1;
    cout << b << endl;
}