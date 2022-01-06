//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0, sum = 0;
    for(int i = 1; i <= (n); i++){
        if(n % i == 0){
            count++;
            sum += i;
            cout << i << " ";
        }
    }
    cout << sum << " " << count ;
}