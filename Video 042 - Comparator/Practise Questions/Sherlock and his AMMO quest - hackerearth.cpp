//Problem Link: https://www.hackerearth.com/problem/algorithm/stl/

#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a;
        cin >> s >> a;
        v.push_back(make_pair(s, a));
    }
    sort(v.begin(), v.end(), comparator);
    for (auto &ans : v)
    {
        cout << ans.first << " " << ans.second << endl;
    }
}