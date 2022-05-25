//Problem Link: https://codeforces.com/problemset/problem/295/B

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define oneDay ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    int n;
    cin >> n;
    int dist[n+1][n+1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cin >> dist[i][j];
    }

    vector<int> del_order(n);
    for(int i = 0; i < n; i++)
        cin >> del_order[i];
    reverse(all(del_order));
    vector<long long> res;
    for(int k = 0; k < n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                dist[i][j] = min(dist[i][j], dist[i][del_order[k]] + dist[del_order[k]][j]);
            }
        }
        long long sum = 0;
        for(int i = 0; i <= k; i++){
            for(int j = 0; j <= k; j++){
                sum += dist[del_order[i]][del_order[j]];
            }
        }
        res.push_back(sum);
    }
    reverse(all(res));
    for(auto &a:res)
        cout << a << " ";
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
