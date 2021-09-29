#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int b[N] = {0};

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }

    for (int i = 0; i < N; i++)
    {
        if (b[k - i] > 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
