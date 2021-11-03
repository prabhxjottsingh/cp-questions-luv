//Problem Link:https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

//using maps

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> marks_map;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }
    auto current_itr = --marks_map.end();
    while (true)
    {
        auto &students = (*current_itr).second;
        int marks = (*current_itr).first;
        for (auto student : students)
            cout << student << " " << marks << endl;
        if (current_itr == marks_map.begin())
            break;
        current_itr--;
    }
}

//1 method
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

//2nd Method

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