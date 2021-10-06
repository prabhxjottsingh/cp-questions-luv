//Print digit_sum of n

#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    if (n == 0)
        return 0;
    else
        return digit_sum(n / 10) + n % 10;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << digit_sum(n);
    return 0;
}