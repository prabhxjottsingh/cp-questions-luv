//Problem Link: https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
long long int parent[N];
long long int size[N];
multiset<long long int> sizes;

void make(int a){
    parent[a] = a;
    sizes.insert(1);
}

int find(int a){
    if(parent[a] == a)
        return a;
    int x = (parent[a] = find(parent[a]));
    return x;
}

void merge(long long int a, long long int b){
    sizes.erase(sizes.find(size[a]));
    sizes.erase(sizes.find(size[b]));
    sizes.insert(size[a] + size[b]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if( a != b ){
        if(size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        merge(a, b);
        size[a] += size[b];
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++){
        make(i);
        size[i] = 1;
    }
    while(q > 0){
        --q;
        int u, v;
        cin >> u >> v;
        Union(u, v);
        if(sizes.size() <= 1){
            cout << 0 << endl;
        }
        else{
            int min = *sizes.begin();
            int max = *(--sizes.end());
            cout << max - min << endl;
        }
    }
}