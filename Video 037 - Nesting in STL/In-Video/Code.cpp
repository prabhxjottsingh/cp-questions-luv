//understanding nesting

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //map<pair<int,int>,int> m;
    pair<int, int> p1, p2;
    p1 = {1, 2};
    p2 = {2, 3};
    //cout<<(p1<p2)<<endl;
    //pairs can be directly compared like this, if first element of both the pairs is equal, then the comparison is done on the basis of second one
    set<int> s1, s2;
    s1 = {1, 23, 23};
    s2 = {2, 3, 4};
    //cout<<(s1>s2);
    //we can use every datatype as key in case of maps that can be compared, like here, pair and sets can be used as key in maps
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        cin >> fn >> ln;
        int ct;
        cin >> ct;
        for (int j = 0; j < ct; j++)
        {
            int x;
            cin >> x;
            m[make_pair(fn, ln)].push_back(x);
        }
    }
    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for (auto &elements_in_list : list)
            cout << elements_in_list << " ";
        cout << endl;
    }
    //pairs thus will be printed in sorted order

    return 0;
}