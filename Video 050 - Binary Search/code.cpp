//Predicate Function: a function which returns either or flase onyl
// time complexity: O (log n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int to_find;
    cin>>to_find;
    int low = 0, high = n-1;
    int mid;
    while(high - low > 1){
        int mid = (high + low)/2;
        if(v[mid] < to_find)
            low = mid + 1; 
        else if(v[mid] > to_find)
            high = mid - 1;
        else
            break;
    }
    if(v[low] == to_find)
        cout<<low<<endl;
    else if(v[high] == to_find)
        cout<<high<<endl;
    else
        cout<<"Element not found";
}