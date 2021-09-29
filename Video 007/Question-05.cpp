#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
            cout << "G";
        else if ((s[i] == '(') && (s[i + 1] == ')'))
            cout << "o";
        else if ((s[i] == '(') && (s[i + 1] == 'a' && s[i + 2] == 'l' && s[i + 3] == ')'))
            cout << "al";
    }
    return 0;
}