#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (hsh[i] > k)
            count++;
    }
    cout << count;
    return 0;
}