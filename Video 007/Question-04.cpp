#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hsh[26] = {0};
    string str;
    cin >> str;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
        hsh[a[i] - 'a']++;
    for (int i = 0; i < str.length(); i++)
    {
        if (hsh[str[i] - 'a'] > 0)
            continue;
        else
            cout << str[i];
    }
    return 0;
}