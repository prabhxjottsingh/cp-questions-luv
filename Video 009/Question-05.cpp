#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int prev = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= prev)
            {
                count++;
            }
            prev = min(prev, a[i]);
        }
        cout << count << endl;
    }
    return 0;
}