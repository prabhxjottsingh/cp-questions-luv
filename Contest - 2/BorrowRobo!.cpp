//Problem Link: https://www.hackerearth.com/problem/algorithm/borrow-robo/

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
    vector<ll> v(n);
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, price;
        cin >> x >> price;
        x--;
        if (v[x] == price)
        {
            cout << 0 << endl;
            continue;
        }
        mp[v[x]]--;
        if (v[x] > price)
        {
            if (mp.find(price) == mp.end())
            {
                cout << -1 << endl;
            }
            else
                cout << mp[price] << endl;
        }
        else
        {
            ll z = price - v[x];
            if ((mp.find(price) == mp.end()) && (mp.find(z) == mp.end()))
                cout << -1 << endl;
            else
            {
                if (mp.find(price) == mp.end())
                {
                    if (mp[z] == 0)
                        cout << -1 << endl;
                    else
                        cout << mp[z] << endl;
                }
                else if (mp.find(z) == mp.end())
                    cout << mp[price] << endl;
                else
                    cout << mp[z] + mp[price] << endl;
            }
        }
        mp[v[x]]++;
    }
}

int main()
{
    oneDay
        ll tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
