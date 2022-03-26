#include<bits/stdc++.h>
using namespace std;

void printBinary(int n){
    for(int i = 8; i > -1; i--){
        cout << ((n & (1 << i)) ? 1 : 0);
    }
    cout << endl;
}

void toggleIthBit(int &x, int i){
    x ^= (1 << i);
}

void setIthBit(int &x, int i){
    x |= (1 << i);
}

void unsetIthBit(int &x, int i){
    x &= ~(1 << i);
}

int main(){
    int n;
    cin >> n;
    cout << n;
    cout << endl;
    printBinary(n);
    toggleIthBit(n, 2);
    printBinary(n);
    setIthBit(n, 3);
    printBinary(n);
    unsetIthBit(n,3);
    printBinary(n);
    return 0;
}
