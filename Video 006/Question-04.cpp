#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r = 0, n, rev = 0;
        cin >> n;
        while (n)
        {
            r = n % 10;
            rev = rev * 10 + r;
            n = n / 10;
        }
        cout << rev << endl;
    }
    return 0;
}