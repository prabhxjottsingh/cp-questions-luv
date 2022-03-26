#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define oneDay ios_base::sync_with_stdio(false);cin.tie(NULL);

void printBinary(int n){
    for(int i = 8; i >= 0; i--){
        cout << ((n & (1 << i)) ? 1 : 0);
    }
    cout << endl;
}

void solve(){
    int n;
    cin >> n;
    int numberOfArrays = n;
    vector<vector<int>> v;
    while(numberOfArrays--){
        int x;
        cin >> x;
        vector<int> temp(x);
        for(auto &a:temp)
            cin >> a;
        v.push_back(temp);
    }
    for(auto &a:v){
        for(auto &b:a)
            cout << b << " ";
        cout << endl;
    }
    vector<int> masks(n, 0);
    for(int i = 0; i < n; i++){
        for(auto &a:v[i]){
                masks[i] |= (1 << a);
        }
    }
    for(auto &a:masks){
        printBinary(a);
    }
    cout << endl;
    cout << __builtin_popcount(masks[1] & masks[0]);
}


int main(){
    oneDay
    ll tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
        cout << endl;
    }
    return 0;
}