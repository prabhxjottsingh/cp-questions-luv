//O(n) -> Time Complexity

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prime_factors;
    int n;
    cin >> n;
    for(int i = 2; i < n; i++){
        while(n % i == 0){
            prime_factors.push_back(i);
            n /= i;
        }
    }
    for(auto a:prime_factors)
        cout << a << " ";
}