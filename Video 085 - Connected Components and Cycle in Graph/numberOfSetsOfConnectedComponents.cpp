#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

const int N = 1e5 + 7;
vector<int> graph[N];
vector<bool> isVis(N, 0);

void dfs(int parent)
{
    if (isVis[parent])
    {
        return;
    }
    isVis[parent] = true;
    for (auto &child : graph[parent])
    {
        dfs(child);
    }
}

void solve()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int countDFS = 0;
    for (int i = 1; i <= n; i++)
    {
        if (isVis[i])
        {
            continue;
        }
        dfs(i);
        countDFS++;
    }
    cout << countDFS;
}

int main()
{
    oneDay
        ll tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}