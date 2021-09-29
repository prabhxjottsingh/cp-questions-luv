#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
long long int arr[N];

int main()
{
    int n, q;
    long long int maxi = 0;
    cin >> n >> q;
    while (q--)
    {
        int a, b;
        long long k;
        cin >> a >> b >> k;
        arr[a] = arr[a] + k;
        arr[b + 1] = arr[b + 1] - k;
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
        maxi = max(arr[i], maxi);
    }
    cout << maxi;
    return 0;
}
