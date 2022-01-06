//Problem link: https://codeforces.com/contest/776/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll N = 1e5;
vector<bool> isPrime(N, true);

void seive()
{
    ll i, j;
    isPrime[0] = isPrime[1] = false;
    for (i = 0; i < N; i++)
    {
        if (isPrime[i])
        {
            for (j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    seive();
    ll n, i;
    cin >> n;
    if (n < 3)
    {
        if (n == 1)
            cout << 1 << endl
                 << 1;
        else
            cout << 1 << endl
                 << 1 << " " << 1;
        return 0;
    }
    ll count = 0;
    cout << 2 << endl;
    for (i = 0; i < n; i++)
    {
        if (isPrime[i + 2])
            cout << 1;
        else
            cout << 2;
        cout << " ";
    }
}