#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert({1, 2});
    m.insert({3, 4});
    auto it = m.find(3); //here then it pointer points to the map whose key value is 3
    for (auto itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " " << itr->second << endl;
    cout << it->first << " " << it->second << endl;
    m.insert(it, {3, 60});
    for (auto itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " " << itr->second << endl;
    cout << m.count(3) << endl;
    for (auto itr = m.rbegin(); itr != m.rend(); itr++)
        cout << itr->first << " " << itr->second << endl;
    return 0;
}