//O(N) -> Because of queue, V - Node, E - Edges O(V + E)

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int N = 1e3 + 7;
vector<int> graph[N];
bool isVis[N];
vector<int> parentNode(N, 0);
vector<int> level(N);

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    isVis[source] = 1;
    while (!q.empty())
    {
        int currVal = q.front();
        q.pop();
        for (int child : graph[currVal])
        {
            if (isVis[child] == 0)
            {
                q.push(child);
                isVis[child] = 1;
                level[child] = level[currVal] + 1;
            }
        }
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
    bfs(1);
    for (int i = 0; i <= n; i++)
    {
        cout << i << ":" << level[i] << endl;
    }
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