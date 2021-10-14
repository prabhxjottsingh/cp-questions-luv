//Link Problem: https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew

#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<string> s;
        for (ll i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            s.insert(x);
        }
        for (auto value : s)
            cout << value << endl;
    }
    return 0;
}
