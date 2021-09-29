#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, mul = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mul = mul * a[i];
        }
        if ((mul % 10 == 2) || (mul % 10 == 3) || (mul % 10 == 5))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}