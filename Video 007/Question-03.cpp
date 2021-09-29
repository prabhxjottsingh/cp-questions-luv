#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string str = a;
    int n = a.length();
    for (int i = 0; i < n / 2; i++)
    {
        char ch;
        ch = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = ch;
    }
    if (a == str)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}