// Time Complexity: O(N ^ 2)

#include <bits/stdc++.h>
using namespace std;

const int N = 25e2 + 7;
vector<int> v(N);
int dp[N];

int lis(int i)
{
    if (dp[i] != -1)
        return dp[i];
    int ans = 1;
    for (int j = 0; j < i; j++)
    {
        if (v[i] > v[j])
        {
            ans = max(ans, lis(j) + 1);
        }
    }
    return dp[i] = ans;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 1;
    for (int i = 0; i < n; i++)
        ans = max(ans, lis(i));
    cout << ans;
}

// leetCode Solution:

//Time Complexity: O(N ^ 2)

class Solution
{
private:
    int lis(int i, int dp[], vector<int> &nums)
    {
        if (dp[i] != -1)
            return dp[i];
        int count = 1;
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
                count = max(count, lis(j, dp, nums) + 1);
        }
        return dp[i] = count;
    }

public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        int dp[n];
        memset(dp, -1, sizeof(dp));
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            count = max(count, lis(i, dp, nums));
        }
        return count;
    }
};