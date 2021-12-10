#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll N = 1e6 + 10;
ll n;
ll m;
ll trees[N];

bool isWoodSufficient(long long h)
{
    long long sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (trees[i] >= h)
            sum = sum + trees[i] - h;
    }
    return (sum >= m);
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
        cin >> trees[i];
    sort(trees, trees + n);
    long long low = 0, high = trees[n - 1], mid;

    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (isWoodSufficient(mid))
        {
            low = mid;
        }
        else
            high = mid - 1;
    }

    if (isWoodSufficient(high))
        cout << high;
    else
        cout << low;
    //Time Complexity: O(N log h)
}