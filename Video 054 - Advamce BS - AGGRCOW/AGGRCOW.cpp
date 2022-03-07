#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define mxe(v) *max_element(all(v))
#define mne(v) *min_element(all(v))
#define oneDay ios_base::sync_with_stdio(false);cin.tie(NULL);

bool helper(vector<int> v, int x, int k){
    int cows = 1;                           //place one cow on first position (Greedy)
    int n = v.size(), prev = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] - prev >= x){
            cows++;
            prev = v[i];
        }
        if(cows >= k)
            return true;
    }
    return (false);
}

void solve(){
    int n, i, k;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    int low = 0, high = 1e9, ans, mid = 0;
    while(high >= low){
            mid = (high + low)/2;
        if(helper(v, mid, k)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans;
}

int main(){
    oneDay
    ll tc = 1;
    cin >> tc;
    while(tc--){
        solve();
        cout<<endl;
    }
    return 0;
}
