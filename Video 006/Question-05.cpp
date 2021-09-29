#include <bits/stdc++.h>
using namespace std;

const int N = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long prod = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        prod = (prod * a[i]) % N;
    }
    cout << prod;
    return 0;
}