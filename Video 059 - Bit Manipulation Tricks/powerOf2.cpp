#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 15;
    if ((n & (n - 1)))
        cout << n << " is not a power of two";
    else
        cout << n << " is a power of two";
}