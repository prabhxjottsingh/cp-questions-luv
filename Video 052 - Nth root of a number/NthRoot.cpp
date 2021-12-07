//Time Complexity: O( p * log(N * (10^d)) ) - Pth root of a number N, upto d precision

#include <bits/stdc++.h>
using namespace std;

double eps = 1e-10; //this is use to set the precision of teh answer, that is upto which decimal place we want our answer to be correct

double multiply(double x, double n)
{ //function for multipling a number n times
    double mul = 1;
    while (n)
    {
        mul = mul * x;
        n--;
    }
    return mul;
}

int main()
{
    double x, n;
    cin >> x >> n;
    double low = 1, high = x, mid;
    while (high - low > eps)
    {
        mid = (high + low) / 2;
        if (multiply(mid, n) < x)
            low = mid;
        else
            high = mid;
    }
    cout << setprecision(10) << low;
}