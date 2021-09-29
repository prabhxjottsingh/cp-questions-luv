#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r = 0, n, sum = 0;
        cin >> n;
        while (n)
        {
            r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}