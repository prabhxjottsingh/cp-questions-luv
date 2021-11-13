//Problem Link: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include <bits/stdc++.h>
using namespace std;

bool Condition(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second > b.second;
}

int main()
{
    vector<pair<string, int>> vect;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> s >> x;
        vect.push_back(make_pair(s, x));
    }
    sort(vect.begin(), vect.end(), Condition);
    for (auto &pr : vect)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}