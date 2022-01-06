//Problem Link: https://codeforces.com/contest/230/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

set<ll> tprime;
const int N = 1e6 + 7;
ll ar[N];

void t_primes()
{
    tprime.insert(4);
    for (ll i = 3; i < (1e6 + 1); i += 2)
    {
        if (ar[i] == 0)
        {
            tprime.insert(i * i);
            for (ll j = i; j <= 1e6 + 7; j += i)
            {
                ar[j] = i;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    t_primes();
    while (tc--)
    {
        ll x;
        cin >> x;
        if (tprime.find(x) != tprime.end())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}