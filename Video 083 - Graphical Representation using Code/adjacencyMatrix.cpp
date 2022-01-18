//Adjacency Matrix

//if i,j and connected in a graph then a[i][j] = 1

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
int graph[N][N];

int main()
{
    int vertex;
    cin >> vertex >> edges;
    for (int i = 0; i < vertex; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
}