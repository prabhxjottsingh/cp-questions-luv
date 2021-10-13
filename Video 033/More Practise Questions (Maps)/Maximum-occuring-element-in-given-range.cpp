#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        map<int,int> freq;
        for(int i=l; i<=r; i++)
            freq[a[i]]++;
        int maxFreq = -1;
        int maxFreqElement = -1;
        for(auto it : freq){
            if(it.second>=maxFreq){
                maxFreq = it.second;
                maxFreqElement = it.first;
            }
        }
        cout<<maxFreqElement<<":"<<maxFreq<<endl;
    }
    return 0;
}