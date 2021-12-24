#include <bits/stdc++.h>
using namespace std;

vector<int> decimalToBinary(int n)
{
    vector<int> s;
    while (n)
    {
        int r;
        r = n % 2;
        n /= 2;
        s.push_back(r);
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << n << "->";
        vector<int> ans = decimalToBinary(n);
        for (auto a : ans)
            cout << a;
        cout << endl;
    }
}