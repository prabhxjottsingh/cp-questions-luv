#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int, int>> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}}; //this v will store two values, i.e. it will store a pair, v[1] will be a pair, as well as v[0] will also be a pair

    printvec(v);
    //to input vector of pairs
    vector<pair<int, int>> p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        //p.push_back({x,y});
        p.push_back(make_pair(x, y));
    }
    printvec(p);

    return 0;
}
