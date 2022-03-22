//observe the code, you will yourself unserstand it

#include<bits/stdc++.h>
using namespace std;

string intToBinary(int x){
    string s;
    for(int i = 0; i < 32; i++){
        if( ((x >> i) & 1) )
            s.push_back('1');
        else
            s.push_back('0');
    }
    return s;
}

int binaryToString(string s){
    int x = 0;
    for(int i = 0; i < 32; i++){
        if(s[i] == '1')
            x += pow(2, i);
    }
    return x;
}

int main(){
    int x = 10;
    string s = intToBinary(x);
    cout << s;
    cout << endl;
    cout << binaryToString(s);
    return 0;
}
