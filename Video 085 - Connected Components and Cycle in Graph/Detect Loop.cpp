// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
private:
    bool dfs(int vertex, int parent, vector<int> graph[], vector<bool> &isVis)
    {
        isVis[vertex] = true;
        bool isLoopPresent = false;
        for (int child : graph[vertex])
        {
            if (isVis[child])
            {
                if (child == parent)
                    continue;
                else
                    return true;
            }
            isLoopPresent |= dfs(child, vertex, graph, isVis);
        }
        return isLoopPresent;
    }

public:
    bool isCyclic(int V, vector<int> adj[])
    {
        vector<bool> isVis(V + 10);
        for (int i = 0; i <= V; i++)
            isVis[i] = false;
        for (int i = 0; i < V; i++)
        {
            if (isVis[i])
                continue;
            if (dfs(i, -1, adj, isVis))
                return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends