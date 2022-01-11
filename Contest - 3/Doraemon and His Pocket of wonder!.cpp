//Problem Link: https://www.hackerearth.com/problem/algorithm/doraemon-andd-his-pocket-of-wonder/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    ll n, i;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll m;
    cin >> m;
    vector<ll> b(m);
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
        while (mp[b[i]])
        {
            cout << b[i] << " ";
            mp[b[i]]--;
        }
    }
    for (auto a : mp)
    {
        while (a.second)
        {
            cout << a.first << " ";
            a.second--;
        }
    }
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
