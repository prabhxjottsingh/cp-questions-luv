#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    //atlast we added 9 so 9 is shown first, and as stack is LIFO, there first of all 9 is deleted
}