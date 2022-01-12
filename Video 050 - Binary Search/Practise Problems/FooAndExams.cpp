//Problem Link: https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/foo-and-exams-4/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll stress(ll a, ll b, ll c, ll d, ll mid)
{
    ll x = a * mid * mid * mid + b * mid * mid + c * mid + d;
    return x;
}

void solve()
{
    ll a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int ans = 0;
    ll low = 0, high = 9e5, mid;
    while (high >= low)
    {
        mid = (high + low) / 2;
        // ll x = a*mid*mid*mid  + b*mid*mid + c*mid + d;
        if (stress(a, b, c, d, mid) <= k)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
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
