#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
long long hsh[N];

int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, x;
        cin >> x >> l >> r;
        l++;
        r++;
        hsh[l] += x;
        hsh[r + 1] -= x;
    }

    for (int i = 1; i <= n; i++)
    {
        hsh[i] += hsh[i - 1];
        a[i] += hsh[i];
    }
    cout << *max_element(a + 1, a + n + 1);
    return 0;
}