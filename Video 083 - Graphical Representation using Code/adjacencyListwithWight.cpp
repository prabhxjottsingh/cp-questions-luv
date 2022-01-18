
//Adjacency List

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> graph[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int v1, v2, w1;
        cin >> v1 >> v2;
        graph[v1].push_back({v2, w1});
        graph[v2].push_back({v1, w1});
    }
}