#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = max(a, b);
        int y = min(a, b);
        int one = 0, one2 = 0;
        int n;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
            cin >> arr[i];
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] == 1)
                    one++;
            }
            else
            {
                if (arr[i] == 1)
                    one2++;
            }
        }
        int ans1 = min(one, one2);
        int ans2 = max(one, one2);
        cout << ans1 * x + ans2 * y;
        cout << endl;
    }
    return 0;
}