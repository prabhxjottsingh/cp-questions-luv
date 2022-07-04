#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[10010];

int func(int amount, vector<int> &coins)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;
    for (int &coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0ll, (func(amount - coin, coins) + 1ll));
    }
    return (dp[amount] = ans);
}

int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int res = func(amount, coins);
    if (res == INT_MAX)
        return -1;
    return res;
}

int main()
{
    vector<int> v = {2};
    int amount = 3;
    cout << coinChange(v, amount);
}