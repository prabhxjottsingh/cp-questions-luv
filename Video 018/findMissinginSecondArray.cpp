//Problem Link: https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    vector<long long> findMissing(long long B[], long long A[],
                                  int N, int M)
    {
        set<int> s;
        for (int i = 0; i < M; i++)
        {
            s.insert(A[i]);
        }
        vector<long long> ans;
        for (int i = 0; i < N; i++)
        {
            if (s.find(B[i]) == s.end())
                ans.push_back(B[i]);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        long long a[n];
        long long b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<long long> ans;

        Solution ob;
        ans = ob.findMissing(a, b, n, m);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << "\n";
    }
    return 0;
} // } Driver Code Ends