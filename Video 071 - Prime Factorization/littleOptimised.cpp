//O(sqrt(n)) => Time Complexity:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prime_factors;
    int n;
    cin >> n;
    int i;
    for (i = 2; i * i < n; i++)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        prime_factors.push_back(n);
    }
    for (auto a : prime_factors)
        cout << a << " ";
}