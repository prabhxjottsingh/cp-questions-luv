//time complexity: log(precision of the answer) i.e. O(log(N * (10^d))) if we want our accuracy to be upto d decimal places

#include <bits/stdc++.h>
using namespace std;

double eps = 1e-10;

int main()
{
    double n;
    cin >> n;
    double low = 1, high = n, mid;
    while (high - low > eps)
    {
        mid = (high + low) / 2;
        if (mid * mid < n)
            low = mid;
        else if (mid * mid > n)
            high = mid;
        else if (mid * mid == n)
            break;
    }
    cout << setprecision(10) << low;
}