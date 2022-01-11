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

//Using Priority Queue
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    ll n, i, k;
    cin >> n >> k;
    vector<ll> v(n);
    priority_queue<ll> s;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        s.push(v[i]);
    }
    ll count = 0;
    while (k--)
    {
        ll x = s.top() / 2;
        // cout << s.top() << " ";
        count += s.top();
        s.pop();
        s.push(x);
    }
    cout << count;
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
