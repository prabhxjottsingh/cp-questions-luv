//Time Complexity: O(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n){
    int x = sqrt(n);
    if(x*x == n)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin >> n;
    int count = 0, sum = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            count += 2;
            sum += i;
            sum += (n/i);
            cout << i << " ";
        }
    }
    if(isPerfect(n)){
        sum -= sqrt(n);
        count--;
    }
    cout << endl;
    cout << sum << " " << count ;
}