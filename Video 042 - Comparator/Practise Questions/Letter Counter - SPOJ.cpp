//Problem Link: https://www.spoj.com/problems/MAY99_E1/

#include <bits/stdc++.h>
using namespace std;

bool compartor(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    vector<pair<char, int>> v;
    map<char, int> mp;
    string s;
    cin >> s;
    int i, n = s.length();
    for (i = 0; i < n; i++)
    {
        mp[s[i]]++;
        v.push_back(make_pair(s[i], mp[s[i]]));
    }
    sort(v.begin(), v.end(), compartor);
    for (auto &val : v)
    {
        cout << val.first;
        break;
    }
}