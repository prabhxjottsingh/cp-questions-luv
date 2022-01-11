//Problem Link: https://www.hackerearth.com/problem/algorithm/last-wish/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool helper(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if ((a.first + a.second) == (b.first + b.second))
        return (a.first < b.first);
    return ((a.first + a.second) < (b.first + b.second));
}

void solve()
{
    ll n, m, i;
    cin >> n;
    vector<pair<ll, ll>> v;
    map<pair<ll, ll>, ll> mp;
    for (i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
        mp[{a, b}] = i;
    }
    vector<pair<ll, ll>> temp = v;
    sort(all(v), helper);
    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = i;
    }
    for (int i = 0; i < n; i++)
        cout << mp[temp[i]] << " ";
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
