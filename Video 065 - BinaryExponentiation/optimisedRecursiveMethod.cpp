//using Divide and conquer
//Time Complexity: O(m*log n)

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binExponentiation(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binExponentiation(a, b / 2);
    if (b & 1)
    {
        return ((a * (res * 1ll * res) % M) % M);
    }
    else
    {
        return ((res * 1ll * res) % M);
    }
}

int main()
{
    cout << binExponentiation(2, 13);
}