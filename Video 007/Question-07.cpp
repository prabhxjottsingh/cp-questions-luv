#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l = 0, a = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            l = 0;
            a++;
        }
        if (s[i] == 'L')
        {
            l++;
            if (l == 3)
                break;
        }
        if (s[i] == 'P')
            l = 0;
    }
    if (a < 2 && l != 3)
        cout << "YEs";
    else
        cout << "NO";
    return 0;
}