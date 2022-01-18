//Time Complexity: O(vertices+edges)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> graph[N];
bool visited[N];

void dfs(int vertex)
{
    //takes action on vertex after entering the vertex
    cout << vertex << endl;
    visited[vertex] = true;
    for (int child : graph[vertex])
    {
        cout << "Child: " << child << " Vertex: " << vertex << endl;
        if (visited[child])
            continue;
        //takes action on child before entering the child node
        dfs(child);
        //takes action on child after exiting the child node
    }
    //takes action on vertex before exting the vdrtex
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
    dfs(1);
}