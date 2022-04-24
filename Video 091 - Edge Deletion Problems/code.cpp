/*

find the maximum product if a single edge is deleted, 
consept: done with the help of pre computation

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> graph[N];
vector<int> subtreeSum(N, 0);
vector<bool> isVis(N, false);

void dfs(int vertex, int parent = 0){
    if(isVis[vertex])
        return;
    isVis[vertex] = true;
    subtreeSum[vertex] = vertex;
    for(auto &child : graph[vertex]){
        if(child == parent || isVis[child])
            continue;
        dfs(child, vertex);
        subtreeSum[vertex] += subtreeSum[child];
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    long long int ans = 0;
    for(int i = 2; i <= n; i++){
        long long int partOne = subtreeSum[i];
        long long int partTwo = subtreeSum[1] - subtreeSum[i];
        ans = max(ans, partTwo * partOne * 1ll);
    }
    cout << ans;
}