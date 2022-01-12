//Problem Link: https://codeforces.com/contest/474/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i, n;
    cin >> n;
    ll a[n];
    vector<ll> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            v[i] = a[i];
        else
            v[i] = v[i - 1] + a[i];
    }
    // for(auto ans:v)
    //     cout<<ans<<" ";
    // cout<<endl;
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll key;
        cin >> key;
        ll mid, low = 1, high = n;
        while (high > low)
        {
            mid = (high + low) / 2;
            if (key <= v[mid])
                high = mid;
            else
                low = mid + 1;

            //cout<<low<<" "<<mid<<" "<<high<<endl;
        }
        if (key <= a[0])
            cout << "1";
        else
            cout << high + 1;
        cout << endl;
    }
}