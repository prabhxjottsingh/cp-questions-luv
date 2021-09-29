#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int up = 0, down = 0, ans = 0, i;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (isupper(ch))
            s[i] = tolower(ch);
        else
            s[i] = toupper(ch);
    }
    for (int i = 0; i < s.size(); i++)
    {
        char cha;
        cha = s[i];
        if (isupper(cha))
            up = up + (int)cha;
        else
            down = down + (int)cha;
        ;
    }
    ans = abs(up - down);
    for (i = 2; i < ans; i++)
    {
        if (ans % i == 0)
            break;
    }
    if (ans == i)
        cout << "1";
    else
        cout << "0";
    return 0;
}
