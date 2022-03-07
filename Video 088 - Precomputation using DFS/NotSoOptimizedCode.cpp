/*
Given Q querie, Q <= 10^5
in each query given V, print sum of V and number of even numbers
in subtree of V

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;

bool isVis[N];
vector<int> graph[N];
int depth[N], height[N];
int sum = 0;

void dfs(int vertex, int parent = 0)
{
    if (isVis[vertex])
        return;
    isVis[vertex] = true;
    sum += vertex;
    for (auto child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
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
    // dfs(1);
    // int q;
    // cin >> q;
    // while(q--){
    //     int v;
    //     cin >> v;
    dfs(1);
    cout << sum << " ";
    // }
}