//Problem Link: https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/
//We just need to count the set bits in the binary representaton of the numbers, baseu we can increae the number of days 
//but amount asked from god must be minimum

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    ll n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < 64; i++){
        if( n & (1ll << i) )
            count++;
    }
    cout << count;
}

int main(){
    oneDay
    ll tc = 1;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
    return 0;
}

