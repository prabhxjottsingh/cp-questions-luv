//Problem Link: https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 7;

vector<int> graph[N];
bool visited[N];
vector<vector<int>> connected_components;
vector<int> current_component;

void dfs(int vertex)
{
    // cout << endl;
    current_component.push_back(vertex);
    visited[vertex] = true;
    for (auto child : graph[vertex])
    {
        // cout << "Parent: " << vertex << ", Child: " << child << endl;
        if (visited[child])
            continue;
        dfs(child);
        
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        current_component.clear();
        if (visited[i] != true)
        {
            dfs(i);
            connected_components.push_back(current_component);
            count++;
        }
    }
    cout << count << endl;
    for (auto a : connected_components)
    {
        for (auto b : a)
            cout << b << " ";
        cout << endl;
    }
}