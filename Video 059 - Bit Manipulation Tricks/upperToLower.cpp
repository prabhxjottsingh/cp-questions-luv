#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a = 'A';
    cout << "Before the operation value if a is: " << a << endl;
    a = a | (1 << 5);
    cout << "After the operation value of a is: " << a;
}