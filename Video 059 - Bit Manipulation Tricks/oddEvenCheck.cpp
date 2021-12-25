#include<bits/stdc++.h>
using namespace std;

int main(){
    int even = 2, odd = 1;
    cout << (even & 1) << endl; //even number will give answer as 0
    cout << (odd & 1) << endl; //odd number will give answer as 1
    return 0;
}

//operations like modulo and division take time, so its better to use bit