#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert({1, 2});
    m.insert({2, 3});
    for (auto it = m.rbegin(); it != m.rend(); it++)
        cout << it->first << " " << it->second << endl;
    return 0;
}