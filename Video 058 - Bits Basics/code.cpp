//Right mode bit - Most Significant Bit
//Left Most Bit - Least Significant Bit
//set bit = 1
//unset bit = 0
// in 11101110 -> set bits count = 6 and unset bit counts ->2

/*
to check if a particular bit of a number is set or not
then we will take a number having that bit set only, then we will
find an dof both numbers, if final ans is 0 then the nth bit is set
other wise bit is not
*/

#include <bits/stdc++.h>
using namespace std;

void printBinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    printBinary(n);
    //to check if ith bit of a number is set or not
    int i = 3;
    if ((n & (1 << i)) == 0)
        cout << "Not set";
    else
        cout << "Set";
    cout << endl;

    //to set the ith bit of a number
    i = 5;
    printBinary(n | (1 << i));

    //~tilde operator inverst the binary
    printBinary(~n);

    //to unset the ith bit of a number
    printBinary(n & (~(1 << i)));

    //toggle a bit (if bit is 1, then it changes to 0 or if bit is 0 then it changes to 1)
    printBinary(n ^ (1 << i));
    printBinary(n ^ (1 << i));

    //count the number of setbits
    int count = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((n & (1 << i)) != 0)
            count++;
    }
    cout << "Set Bits -> " << count;
    cout << endl;
    cout << "Unset Bits -> " << 31 - count;
    cout << endl;

    //inbuilt function to count bits

    cout << __builtin_popcount(n) << endl;
}