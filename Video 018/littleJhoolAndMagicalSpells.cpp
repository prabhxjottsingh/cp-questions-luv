#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    string a;
    cin >> a;
    bool rPresent = false, bPresent = false, yPresent = false, uPresent = false;
    int n = a.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (a[i] == 'r')
            rPresent = true;
        if (a[i] == 'u')
            uPresent = true;
        if (a[i] == 'b')
            bPresent = true;
        if (a[i] == 'y')
            yPresent = true;
    }
    if ((yPresent == false) || (bPresent == false) || (uPresent == false) || (rPresent == false))
    {
        cout << 0;
        return;
    }
    int ans = INT_MAX;
    for (auto a : mp)
    {
        if ((a.first == 'r') || (a.first == 'u') || (a.first == 'b') || (a.first == 'y'))
        {
            ans = min(ans, a.second);
        }
    }
    cout << ans;
}

int main()
{
    oneDay
        ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
