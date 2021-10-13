/*
Given N strings and Q queries, In each query you are given a string, print frequency
of that string

N <= 10^6
|S| <= 100
Q <= 10^6
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    unordered_map<string, int> freq;
    while (n--)
    {
        string s;
        cin >> s;
        freq[s]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << freq[s] << endl;
    }
    return 0;
}