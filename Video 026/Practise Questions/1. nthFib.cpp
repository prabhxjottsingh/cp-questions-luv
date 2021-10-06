// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define mod 1000000007
#define ll long long int

class Solution
{
public:
    long long int nthFibonacci(long long int n)
    {
        long long int a = 0, b = 1, c;
        while (n - 1)
        {
            c = (a + b) % mod;                              //%mod bcs c cannot store large values
            a = b;
            b = c;
            n--;
        }
        return (c);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
// } Driver Code Ends