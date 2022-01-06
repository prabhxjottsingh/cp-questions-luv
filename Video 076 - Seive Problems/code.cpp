#include<bits/stdc++.h>
using namespace std;
const int N  =2e5+10;

int multiples_cnt[N];
int hsh[N];

int main(){
    int n,i;
    cin >> n;
    vector<int> v(n);
    for(i=0; i<n; i++){
        cin >> v[i];
        hsh[v[i]]++;
    }
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j += i)
            multiples_cnt[i] += hsh[j];
    }
    int t;
    cin >> t;
    while(t--){
        int p,q;
        int count = 0;
        cin >> p >> q;
        long long lcm = (p * 1ll *q) / __gcd(p,q);
        long long ans = multiples_cnt[p] + multiples_cnt[q];
        if(lcm < N){  
            ans -= multiples_cnt[lcm];
        }
        cout << ans << "\n";
    }
}   