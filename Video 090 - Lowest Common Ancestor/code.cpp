#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> graph[N];
vector<bool> isVis(N, false);
vector<int> par(N);

void dfs(int vertex, int parent = -1)
{
    if (isVis[vertex] == true)
        return;
    isVis[vertex] = true;
    par[vertex] = parent;
    for (int &child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
    }
}

vector<int> path(int v)
{
    vector<int> res;
    while (v != -1)
    {
        res.push_back(v);
        v = par[v];
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= n; i++)
    {
        cout << par[i] << " ";
    }
    vector<int> a = path(x), b = path(y);
    int minSize = min(a.size(), b.size());
    int lca = -1;
    for (int i = 0; i < minSize; i++)
    {
        if (a[i] == b[i])
            lca = a[i];
        else
            break;
    }
    cout << endl;
    cout << lca;
}

/*
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11
7 2
*/