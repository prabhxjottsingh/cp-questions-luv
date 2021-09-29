#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, sum = 0, mini = INT_MAX;
        int n;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
            mini = min(mini, a[i]);
        }
        if (n * k <= sum || k - mini < 0)
            cout << "0";
        else
            cout << k - mini;
        cout << endl;
    }
    return 0;
}