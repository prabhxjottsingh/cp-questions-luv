/*

Given Q queries,Q <= 1e5
In eah query given V,
print subtree sum of V & number of even elements in subtree V

*/

// Subtree sum is counted while going upwards

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> graph[N];
vector<int> subtreeSum(N, 0);
vector<int> evenCount(N, 0);
vector<bool> isVis(N, false);

void dfs(int vertex, int parent = 0)
{
    if (!(vertex & 1))
        evenCount[vertex]++;
    subtreeSum[vertex] += vertex;
    isVis[vertex] = true;
    for (auto &child : graph[vertex])
    {
        if (child == parent || isVis[child])
            continue;
        dfs(child, vertex);
        subtreeSum[vertex] += subtreeSum[child];
        evenCount[vertex] += evenCount[child];
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
    // int q;
    // cin >> q;
    // while(q--){
    //     int v;
    //     cin >> v;
    //     cout << subtreeSum[v] << " " << evenCount[v] << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        cout << subtreeSum[i] << " " << evenCount[i] << endl;
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
*/
