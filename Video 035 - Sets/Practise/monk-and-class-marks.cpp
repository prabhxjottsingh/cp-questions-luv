//Problem Link:https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<int, string>> a;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        a.push_back(make_pair(-n, s));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i].second << " " << -1 * a[i].first << endl;
    }
    return 0;
}