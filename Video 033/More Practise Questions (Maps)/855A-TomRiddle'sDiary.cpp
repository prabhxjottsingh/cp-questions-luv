//Problem Link: https://codeforces.com/contest/855/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
    {
        string x;
        cin >> x;
        m[x]++;
        if (m[x] > 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}