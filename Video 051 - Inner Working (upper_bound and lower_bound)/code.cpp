//Implement lower and upper bound using binary search

//lower_bound -> index of either of the element if it is present or index of the element which is greater than that


#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()

int lower_bound(vector<int> &v, int element){
    int low = 0, high = v.size()-1;
    while((high - low) > 1){
        int mid = (low + high)/2;
        if(v[mid] < element)
            low = mid + 1 ;
        else
            high = mid;                 //high != mid - 1, bcs in lower_bound we dont remove the equalsa to term out of our search space
    }
    if(v[low] >= element)
        return low;
    else if(v[high] >= element)
        return high;
    return -1;
}

int upper_bound(vector<int> &v, int element){
    int low = 0, high = v.size()-1;
    while((high - low) > 1){
        int mid = (low + high)/2;
        if(v[mid] <= element)
            low = mid + 1 ;
        else
            high = mid;                 
    }
    if(v[low] > element)
        return low;
    else if(v[high] > element)
        return high;
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin>>v[i];
    sort(all(v));
    int element;
    cin>>element;
    cout<<lower_bound(v,element)<<endl;
    cout<<upper_bound(v,element);
}