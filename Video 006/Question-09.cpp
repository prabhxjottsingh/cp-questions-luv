#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 2 * n;
    int min1, min2, mini;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            min1 = min(i - 1, l - i);
            min2 = min(j - 1, l - j);
            mini = min(min1, min2);
            cout << n - mini;
        }
        cout << endl;
    }
}