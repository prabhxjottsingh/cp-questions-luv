#include <iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int a, b, c, count = 0, x, step;
    cin >> a >> b >> c;
    for (int i = 0; i <= 1e6 + 10; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            if (count == c)
                x = i;
            count++;
        }
    }

    if ((x % a == 0) && (x % b == 0))
    {
        step = lcm(a, b);
    }

    else if ((x % a == 0))
    {
        step = a;
    }

    else if ((x % b == 0))
    {
        step = b;
    }

    for (int i = x; i > 0; i--)
    {
        if (i % step == 0)
            cout << i << " ";
    }

    cout << "0";

    return 0;
}
