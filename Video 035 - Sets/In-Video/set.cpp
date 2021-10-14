#include <bits/stdc++.h>
using namespace std;

void print(set<string> &m)
{
    for (auto it : m)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it = m.begin(); it != m.end(); it++)
        cout << *it << " ";
}

int main()
{
    set<string> s;
    s.insert("abs"); //O(log n )
    s.insert("zbs");
    s.insert("dnl");
    auto it = s.find("abs");
    //if(it!=s.end())
    //    s.erase(it);
    //if we want to delete a particular string in the set, then we can use erase function
    s.erase("dnl");
    print(s);
    return 0;
}