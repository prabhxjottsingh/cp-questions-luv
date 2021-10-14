/*

Given N strings, and Q queries, in each query you are given a string
print yes if string is present else print no
N <= 10^5
|S| <= 100000
Q <= 10^6

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string str;
        cin >> str;
        auto itr = s.find(str);
        if (itr != s.end())
            cout << "String is present";
        else
            cout << "String is not present";
        cout << endl;
    }
    return 0;
}