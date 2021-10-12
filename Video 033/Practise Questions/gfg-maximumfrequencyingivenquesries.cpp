//Question Link: https://www.geeksforgeeks.org/maximum-occurring-element-in-a-subarray-range-mode-queries/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    while (x--)
    {
        int l, r, maxi = 0;
        cin >> l >> r;
        map<int, int> m;
        auto it = m.begin();
        for (int i = l; i <= r; i++)
        {
            m[a[i]]++;
            it++;
            maxi = max(maxi, m[a[i]]);
        }

        cout << maxi << endl;
    }
    return 0;
}