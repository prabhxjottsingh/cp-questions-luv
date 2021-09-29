//code for element present in first array but not in second one, code can be more optimised with th ehelp of sets, but
//have no knowledge about it yet, so using this one only, in which time complexirty is mch higher, which it shouldn't be.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
                break;
        }
        if (m == j)
            cout << a[i] << " ";
    }
    return 0;
}