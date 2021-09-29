#include <iostream>
using namespace std;

long long binomialCoeff(int n, int k)
{
    long long res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << binomialCoeff(i, j) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
