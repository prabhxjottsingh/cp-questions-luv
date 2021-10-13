#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, string> m_unordered;
    m_unordered[2] = "abs"; //O(log n)
    m_unordered[5] = "mos";
    m_unordered[3] = "0493";
    m_unordered[1] = "mfk";
    m_unordered[0] = "df";
    for (auto it : m_unordered)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    map<int, string> m_ordered;
    m_ordered[2] = "abs"; //O(1)
    m_ordered[5] = "mos";
    m_ordered[3] = "0493";
    m_ordered[1] = "mfk";
    m_ordered[0] = "df";
    for (auto it : m_ordered)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}