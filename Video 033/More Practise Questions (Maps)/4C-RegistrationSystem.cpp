//Problem Link: https://codeforces.com/contest/4/problem/C

#include <Bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    while (n--)
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
