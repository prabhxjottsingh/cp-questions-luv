#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k, n, x, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> k;
        ll ans = 0;
        multiset<ll> s; //in this case use multiset bcs we dont want to delet e the same values
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }
        while (k--)
        {
            auto it = (--s.end());
            ans = ans + (*it);
            s.insert((*it) / 2);
            s.erase(it);
        }
        cout << ans << endl;
    }
    return 0;
}