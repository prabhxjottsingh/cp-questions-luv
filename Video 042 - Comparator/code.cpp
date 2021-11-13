#include <bits/stdc++.h>
using namespace std;

bool ConditionSort(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first; //return the thing you want, as if you want a.first<b.first, then return that only
}

int main()
{
    vector<pair<int, int>> vect;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vect.push_back(make_pair(a, b));
    }
    sort(vect.begin(), vect.end(), ConditionSort);
    for (auto val : vect)
    {
        cout << val.first << " " << val.second << endl;
    }
    sort(vect.begin(), vect.end(), greater<pair<int, int>>());
}