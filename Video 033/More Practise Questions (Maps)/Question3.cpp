//Problem Link: https://atcoder.jp/contests/arc087/tasks/arc087_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    auto it = m.begin();
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->first != it->second)
        {
            if (it->first > it->second)
                count = count + it->second;
            else
                count = count + abs(it->first - it->second);
        }
    }
    cout << count;
}