#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int n = a.length();
    for (int i = 0; i < n / 2; i++)
    {
        char ch;
        ch = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = ch;
    }
    cout << a;
    return 0;
}