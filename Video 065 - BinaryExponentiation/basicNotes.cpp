//Binary Exponentiation -> Power of a number
/*

we have inbuilt function like power, still we are using
binary exponentiation due to precision error

pow(2,3) => return a double value thus it is preferred to use binary exponentiation rather than the power function
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double d = 1e24; //double can store great values but we cannot be sure if the value stored in double variable is exact or not
    cout << fixed << setprecision(30) << d;
    int a = 2, b = 13, ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    cout << endl
         << ans; //this calculates the power in O(n) => time complexity which is not considered good in CP , bcs we need to frequently count the powr
}