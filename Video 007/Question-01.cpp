#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    char ch;
    ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    cout << a << " " << b;
    return 0;
}