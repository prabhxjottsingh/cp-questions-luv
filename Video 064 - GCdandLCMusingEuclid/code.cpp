//maximum value of a divisor that can divide both the numbers => Greatest Common Divisor

// ((a*b) / __gcd(a,b)) = LCM

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    gcd(b, a % b);
}

//Time Complexity: O(log N)

int main()
{
    cout << "GCD -> " << gcd(8, 40) << endl;
    cout << "LCM -> " << (8 * 40) / gcd(8, 40) << endl;
}

/*

Minimum Application:
to find the minimum fraction:
a / b = (a / gcd(a,b)) / (b / gcd(a,b))

*/