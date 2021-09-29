#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x = 1, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            ans = ans + x * (s[i] - 48);
            x = x * 2;
        }
        cout << ans << endl;
    }
    return 0;
}