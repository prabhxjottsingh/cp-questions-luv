// Problem Link: https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        int z;
        cin >> z;
        if (x == 1)
            s.insert(z);
        if (x == 2)
            s.erase(z);
        if (x == 3)
        {
            auto it = s.find(z);
            if (it != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}