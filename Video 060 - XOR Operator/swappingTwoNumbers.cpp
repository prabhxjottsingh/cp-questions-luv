#include <bits/stdc++.h>
using namespace std;

//XOR of same numbers is 0, while XOR of two different numbers is 1
//better to replace numbers with bits, because all bits are same of both numbers
//two important properties of XOR numbers
//x ^ 0 = x
//x ^ x = 0

int main()
{
    int a = 6, b = 4;

    cout << "a = " << a;
    cout << endl;
    cout << "b = " << b;

    a = a ^ b;

    b = b ^ a; // => b = b ^ (a ^ b) => b = b ^ b ^ a (because XOR is associtvie operation), thus
    // a is stored in b

    a = a ^ b; //give it a read you will understand this

    //XOR is associative
    cout << endl
         << endl;
    cout << "a = " << a;
    cout << endl;
    cout << "b = " << b;
}