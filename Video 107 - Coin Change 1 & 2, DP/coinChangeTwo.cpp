#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int dp[305][10010];

int helperFunction(int idx, int amount, vector<int> &coins)
{
    if (amount == 0)
        return 1;
    if (idx < 0)
        return 0;
    if (dp[idx][amount] != -1)
        return dp[idx][amount];
    int ways = 0;
    for (int coinAmount = 0; coinAmount <= amount; coinAmount += coins[idx])
    {
        ways += helperFunction(idx - 1, amount - coinAmount, coins);
    }
    return dp[idx][amount] = ways;
}

int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof(dp));
    int res = helperFunction(coins.size() - 1, amount, coins);
    return res;
}

int main()
{
    vector<int> v = {1, 2, 5};
    int amount = 5;
    cout << coinChange(v, amount);
}