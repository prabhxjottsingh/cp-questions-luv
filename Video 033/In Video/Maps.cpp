#include <bits/stdc++.h>
using namespace std;

void display(map<int, string> m)
{
    cout << endl
         << m.size() << endl;
    for (auto &pr : m)
        cout << pr.first << " " << pr.second << endl;
    cout << endl
         << endl;
}

int main()
{
    map<int, string> m;
    //m[key] = value;
    m[1] = "abc"; //O(log n), n = Current size of map
    m[3] = "bcs";
    m[10] = "par";
    m.insert({4, "afg"});
    //map<int, string> :: iterator it;
    //for( it = m.begin(); it!=m.end(); it++)
    //   cout<<it->first <<" "<<it->second<<endl;
    display(m);
    m[6];
    display(m);
    //cannot insert same value twice
    m[3] = "uniqu"; //stored keys are unique
    display(m);
    auto it = m.find(3);
    if (it == m.end())
        cout << "No Value find";
    else
        cout << it->first << " " << it->second;
    m.erase(3);
    display(m);
    auto itr = m.find(6);
    m.erase(itr);
    display(m);
    m.clear();
    display(m);
    return 0;
}
