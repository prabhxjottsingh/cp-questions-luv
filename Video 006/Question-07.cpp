#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n, i, count=0;
    cin>>n;
    if(n%2)
        cout<<"0";                 //condition if the total sum of the sides is odd
    else{
        for(i=1; i<n/2; i++)
            count++;
        cout<<count/2;
    }
    return 0;
}