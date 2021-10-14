#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &m)
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
    multiset<string> s;
    s.insert("abs"); //O(log n )
    s.insert("zbs");
    s.insert("dnl");
    s.insert("dnl");
    s.insert("dnl");
    s.insert("dnl");
    auto it = s.find("dnl");
    if (it != s.end())
        s.erase(it);
    //if we want to delete a particular string in the set, then we can use erase function
    print(s);
    s.erase("dnl");
    cout << endl
         << "**********************" << endl;
    print(s);
    return 0;
}

//can store and print duplicate values