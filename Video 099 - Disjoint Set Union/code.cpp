#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int parent[N];
int size[N];

void make(int a){
    parent[a] = a;
    size[a] = 1;
}

int find(int a){
    if(parent[a] == a)
        return a;
    return (parent[a] = find(parent[a]));
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if( a != b ){
        if(size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        make(i);
    }
    while(k--){
        int u, v;
        cin >> u >> n;
        Union(u, v);
    }
    int connectedComponents = 0;
    for(int i = 1; i <= n; i++){
        if(find(i) == i)
            connectedComponents++;
    }
    cout << connectedComponents;
}
