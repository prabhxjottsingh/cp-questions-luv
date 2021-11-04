#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("prabh");
    q.push("jot");
    q.push("is");
    q.push("a");
    q.push("nice");
    q.push("guy");
    q.push("thanks");
    q.push("for");
    q.push("coming");
    q.push("here");
    q.push("see");
    q.push("you");
    q.push("soon");

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    //in stack we use .top function, while for the same purpose in queue we use .front function
    //stack is LIFO, whereas queue is FIFO
}