#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int a[26] = {0};
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] >= 2)
                flag = 1;
        }
        if (flag == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}
