#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[N];

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        hsh[b]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (hsh[x] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}