/*

Conept Used: First we will find the largest depth from any root node, 
Pre - Requisite: the largest depth node, is one of the ens of the diameter,
thus now we will find the highest depth from this depth node

*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> graph[N];
vector<int> depth(N);

void dfs(int vertex, int parent = -1)
{
    for (int &child : graph[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << depth[i] << endl;
    }
    int maxDepth = INT_MIN;
    int maxDepthNode = -1;
    for (int i = 1; i <= n; i++)
    {
        if (maxDepth < depth[i])
        {
            maxDepth = depth[i];
            maxDepthNode = i;
        }
        depth[i] = 0;
    }
    dfs(maxDepthNode);
    maxDepth = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (maxDepth < depth[i])
        {
            maxDepth = depth[i];
        }
    }
    cout << maxDepth;
}