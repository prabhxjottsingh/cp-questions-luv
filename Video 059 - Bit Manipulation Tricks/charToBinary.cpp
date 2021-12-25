//we will observe that  the only difference between lower and upper case charracters is just the 5th bit
//in case of lower characters 5th bit is set
//while in case of upper characters 5th bit is not set

#include <bits/stdc++.h>
using namespace std;

void printBinary(char ch)
{
    for (int i = 10; i >= 0; i--)
        cout << ((ch >> i) & 1);
    cout << endl;
}

int main()
{

    for (auto ch = 'a'; ch <= 'e'; ch++)
    {
        cout << ch << "->";
        printBinary(ch);
    }

    for (auto ch = 'A'; ch <= 'E'; ch++)
    {
        cout << ch << "->";
        printBinary(ch);
    }
}