/*Given 2D array A of N*N integers. Given q queries and in each query given a,b,c and d print sum of square represented (a,b) as top left point and (c,d) as bottom right point 

Constraints: 

1 <= N <=10^3
1 <= a[i][j] <=10^9
1 <= Q <= 10^5
1 <= a,b,c,d <=n 
*/

//Optimised Code

/*Given 2D array A of N*N integers. Given q queries and in each query given a,b,c and d print sum of square represented (a,b) as top left point and (c,d) as bottom right point 

Constraints: 

1 <= N <=10^3
1 <= a[i][j] <=10^9
1 <= Q <= 10^5
1 <= a,b,c,d <=n 
*/



#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int B[N][N];

int main(){
    int n;
    long long sum=0;
    cin>>n;
    int arr[n][n];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
            B[i][j] = arr[i][j] - B[i-1][j-1] + B[i-1][j] + B[i][j-1];
        }
    }
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<B[c][d] - B[a-1][d] - B[c][b-1] + B[a-1][b-1];
        cout<<endl;
    }
    return 0;
}

//Old Technique

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
    while(t--){
        long long sum=0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int i=a; i<=c; i++){
            for(int j=b; j<=d; j++)
                sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}