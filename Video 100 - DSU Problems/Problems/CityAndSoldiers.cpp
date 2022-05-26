//Problem Link: https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-soldiers/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
long long int parent[N];
long long int size[N];

void make(int a)
{
    parent[a] = a;
}

int find(int a)
{
    if (parent[a] == a)
        return a;
    int x = (parent[a] = find(parent[a]));
    return x;
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        parent[a] = b;
        size[a] += size[b];
    }
}

void makeParent(int x, int v)
{
    if (parent[v] == v)
    {
        parent[v] = x;
        return;
    }
    makeParent(x, parent[v]);
    parent[v] = x;
}

int main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        make(i);
        size[i] = 1;
    }
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int u, v;
            cin >> u >> v;
            Union(u, v);
        }
        else if (t == 2)
        {
            int x;
            cin >> x;
            makeParent(x, x);
        }
        else
        {
            int u;
            cin >> u;
            cout << find(u) << endl;
        }
    }
}