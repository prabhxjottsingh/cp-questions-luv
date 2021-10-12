#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m1;
    map<int, string> m2;
    m1.insert({1, "abc"});
    m1.insert({2, "def"});
    m1.insert({3, "ghi"});
    m1.insert({4, "jkl"});
    m1.insert({5, "mno"});

    m2.insert({1, "abc"});
    m2.insert({2, "def"});
    m2.insert({3, "ghi"});
    m2.insert({4, "jkl"});
    m2.insert({5, "mno"});

    for (auto itr = m1.begin(); itr != m1.end(); itr++)
        cout << itr->first << " " << itr->second << endl;
    cout << endl;
    for (auto itr = m2.begin(); itr != m2.end(); itr++)
        cout << itr->first << " " << itr->second << endl;

    swap(m1, m2);
}