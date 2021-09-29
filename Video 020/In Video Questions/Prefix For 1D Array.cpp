/*Given array A of N integers. Given q queries and in each query given two integers L and R print sum of array elements from index L to R(L and R are included)

Constraints: 

1 <= n <=10^5
1 <= a[i] <=10^9
1 <= Q <= 10^5
1 <= L,R <=n 
*/

//Optimised Code

#include<bits/stdc++.h>
using namespace std;

const int N = 10e7+7;
long long b[N];

int main(){
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum = sum + a[i];
        b[i] = sum;
    }
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        cout<<abs(b[r]-b[l])<<endl;
    }
    return 0;
}

//Old Technique

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int t;
    cin>>t;
    while(t--){
        long long l,r,sum=0;
        cin>>l>>r;
        for(int i=l-1; i<r; i++)
            sum = sum + a[i];
        cout<<sum<<endl;
    }
    return 0;
}