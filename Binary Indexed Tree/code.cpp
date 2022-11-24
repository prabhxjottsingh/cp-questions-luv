#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int bit[N];
int arr[N];

int sum(int i, int n)
{
    int ans = 0;
    while (i > 0)
    {
        ans += bit[i];
        i -= (i & -i);
    }
    return ans;
}

void update(int x, int i, int n)
{
    while (i <= n)
    {
        bit[i] += x;
        i += (i & -i);
    }
}

int main()
{

    memset(bit, 0, sizeof(bit));
    memset(arr, 0, sizeof(arr));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
        update(i, arr[i], n);

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << sum(r, n) - sum(l - 1, n) << endl;
    }
}