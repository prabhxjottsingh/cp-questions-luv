//Problem Link: https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1)
        {
            s.insert(b);
        }
        else if (a == 2)
            s.erase(b);
        else
        {
            if (s.find(b) != s.end())
                cout << "Yes";
            else
                cout << "No";
            cout << endl;
        }
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
