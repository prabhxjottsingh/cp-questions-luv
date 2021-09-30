#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, price;
        long long sum = 0;
        cin >> x >> price;
        x--;
        if (a[x] == price)
        {
            cout << "0" << endl;
            ;
            continue;
        }
        hsh[a[x]]--;
        if (a[x] > price)
        {
            if (hsh[price] == 0)
                cout << "-1" << endl;
            else
                cout << hsh[price] << endl;
        }
        else
        {
            int z = price - a[x];
            if ((hsh[price] == 0) && (hsh[x] == 0))
                cout << "-1" << endl;
            else
                cout << hsh[x] + hsh[price] << endl;
        }
        hsh[a[x]]++;
    }
    return 0;
}