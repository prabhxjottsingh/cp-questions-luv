#include <bits/stdc++.h>
using namespace std;

bool is_positive(int x)
{
    return x >= 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return (x < 0); })
         << endl;
    cout << any_of(v.begin(), v.end(), is_positive);
}