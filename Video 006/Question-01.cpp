/*Problem Link:
https://www.hackerrank.com/challenges/c-tutorial-for-loop/submissions/code/229966623
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x;
    cin>>x;
    int y;
    cin>>y;
    for(int n=x; n<=y; n++){
        if(n<=9){
        if(n==1)
        cout<<"one";
        else if(n==2)
        cout<<"two";
        else if(n==3)
        cout<<"three";
        else if(n==4)
        cout<<"four";
        else if(n==5)
        cout<<"five";
        else if(n==6)
        cout<<"six";
        else if(n==7)
        cout<<"seven";
        else if(n==8)
        cout<<"eight";
        else if(n==9)
        cout<<"nine";
    }
    else{
        if(n%2==0)
        cout<<"even";
        else {
        cout<<"odd";
        }
    }
    cout<<endl;
    }
    return 0;
}
