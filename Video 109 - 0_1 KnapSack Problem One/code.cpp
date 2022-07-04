#include <bits/stdc++.h>
using namespace std;

long long int dp[105][1000005];

long long helperFunction(int idx, long long int leftWeight, long long int weight[], long long int cost[])
{
    if (leftWeight == 0 || idx < 0)
        return 0;
    if (dp[idx][leftWeight] != -1)
        return dp[idx][leftWeight];
    long long res = helperFunction(idx - 1, leftWeight, weight, cost);
    if (leftWeight - weight[idx] >= 0)
        res = max(res, helperFunction(idx - 1, leftWeight - weight[idx], weight, cost) + cost[idx]);
    return dp[idx][leftWeight] = res;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    long long int n, maxWeight;
    cin >> n >> maxWeight;
    long long int weight[n], cost[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> cost[i];
    }
    cout << helperFunction(n - 1, maxWeight, weight, cost);
}