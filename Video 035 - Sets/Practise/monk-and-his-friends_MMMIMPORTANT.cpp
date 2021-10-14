// Problem Link: https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/?fbclid=IwAR1n1FJUNpWIeq7dHY-HytoqqE1nbK9gD4jMjI2UWGTPE8GF4kHROCb7ouA

#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m,n;
        unordered_multiset<ll> s;         //most important concept learnt today
        cin>>n>>m;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            s.insert(x);
        }
        for(ll i=0; i<m; i++){
            ll x;
            cin>>x;
            auto it = s.find(x);
            if(it!=s.end())
                cout<<"YES";
            else
                cout<<"NO";
            s.insert(x);                 //insert the checked value again in the set, dont know why, so lets find out
            cout<<endl;
        }
    }
    return 0;
}
