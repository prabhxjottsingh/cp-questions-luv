#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[N];

// top-down Approach (generally use recrusion)

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    // memoise

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fib(n);
    cout << " ";
    cout << dp[n];

    // bottom-up approach
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    int i = 2;
    for (; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << " ";
    cout << dp[n];
}