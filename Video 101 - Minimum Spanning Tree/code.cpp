#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
int parent[N];
int size[N];

void make(int v){
    parent[v] = v;
}

int find(int v){
    if(v == parent[v])
        return v;
    int u = find(parent[v]);
    return u;
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if( a != b ){
        if(size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += b;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> edges;
    for(int i = 0; i < m; i++){
        int wt, u, v;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }
    sort(edges.begin(), edges.end());

    for(int i = 1; i <= n; i++)
        make(i);

    int cost = 0;

    for(auto &edge : edges){
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if(find(u) == find(v))
            continue;

        Union(u, v);

        cost += wt;

        cout << u << " " << v << endl;

    }

    cout << cost;

}