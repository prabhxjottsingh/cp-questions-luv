//Problem Link: https://codeforces.com/contest/1245/problem/D

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int parent[N];

void make(int v)
{
    parent[v] = v;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    int u = find(parent[v]);
    return u;
}

void Union(int a, int b, vector<int> &size)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> cities(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cities[i].first >> cities[i].second;
    }
    vector<int> size(n + 1, 1);
    vector<int> cost(n + 1), k(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> cost[i];
    for (int i = 1; i <= n; i++)
        cin >> k[i];
    for (int i = 1; i <= n; i++)
        make(i);
    vector<pair<long long int, pair<int, int>>> edges;
    for (int i = 1; i <= n; i++)
    {
        edges.push_back({cost[i], {0, i}});
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int dist = abs(cities[i].first - cities[j].first) + abs(cities[i].second - cities[j].second);
            long long cost = dist * 1ll * (k[i] + k[j]);
            edges.push_back({cost, {i, j}});
        }
    }
    sort(edges.begin(), edges.end());
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    vector<int> powerStations;
    vector<pair<int, int>> connections;
    long long int totalCost = 0;
    for (auto &edge : edges)
    {
        long long cost = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (find(u) == find(v))
            continue;
        Union(u, v, size);
        if (u == 0)
            powerStations.push_back(v);
        if (v == 0)
            powerStations.push_back(u);
        if (u != 0 && v != 0)
            connections.push_back({u, v});
        totalCost += cost;
    }
    cout << totalCost << endl;
    cout << powerStations.size() << endl;
    for (auto &a : powerStations)
        cout << a << " ";
    cout << endl;
    cout << connections.size() << endl;
    for (auto &a : connections)
        cout << a.first << " " << a.second << endl;
}