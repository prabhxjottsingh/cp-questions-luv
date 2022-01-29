#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;

vector<int> graph[N];
int depth[N], height[N];

void dfs(int vertex, int parent = 0)
{
    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << depth[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << height[i] << " ";
    }
}