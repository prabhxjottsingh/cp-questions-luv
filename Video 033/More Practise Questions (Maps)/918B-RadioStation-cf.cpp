//Problem Link: https://codeforces.com/contest/918/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> m1;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string s2;
        cin >> s2;
        s2 = s2 + ";";
        m1[s2] = s;
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        string s2;
        cin >> s2;
        cout << s << " " << s2 << " #" << m1[s2] << endl;
    }
}