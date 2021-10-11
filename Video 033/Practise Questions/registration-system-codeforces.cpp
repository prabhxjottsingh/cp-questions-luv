//Question Link: https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] == 1)
            cout << "OK";
        else
            cout << s << m[s] - 1;
        cout << endl;
    }
    return 0;
}