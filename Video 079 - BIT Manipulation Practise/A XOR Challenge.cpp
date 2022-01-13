//Problem Link: https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/

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
    vector<int> setbits;
    int a = 0, b = 0;
    int bit_cnt = log2(n) + 1;
    for (int i = 0; i < bit_cnt; i++)
    {
        if (n & (1 << i))
            setbits.push_back(i);
        else
        {
            a |= (1 << i);
            b |= (1 << i);
        }
    }
    long long maxProd = -1;
    int sz = 1 << setbits.size();
    for (int mask = 0; mask < sz; mask++)
    {
        int a_copy = a, b_copy = b;
        for (int j = 0; j < setbits.size(); j++)
        {
            if (mask & (1 << j))
                a_copy |= (1 << setbits[j]);
            else
                b_copy |= (1 << setbits[j]);
        }
        maxProd = max(maxProd, a_copy * b_copy * 1ll);
    }
    cout << maxProd;
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
