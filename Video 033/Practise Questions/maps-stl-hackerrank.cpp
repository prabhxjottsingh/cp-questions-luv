//Question Link: https://www.hackerrank.com/challenges/cpp-maps/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            string s;
            cin >> s;
            int y;
            cin >> y;
            m[s] = m[s] + y;
        }
        if (x == 2)
        {
            string s;
            cin >> s;
            m.erase(s);
        }
        if (x == 3)
        {
            string s;
            cin >> s;
            cout << m[s] << endl;
        }
    }
    return 0;
}