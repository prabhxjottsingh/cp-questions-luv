/*

Problem
An empty sequence is balanced.

A sequence of the form (A) or [A] or {A} is balanced if A is balanced.

A sequence of the form AB is balanced if A and B both are balanced.

 

You are given a string A, consisting of '(', ')', '[', ']', '{' and '}' only. You have to find the maximum length of the balanced string after performing some valid operation(s).

Valid operations are

Remove any character from string A

Swap any two adjacent characters of string A

You can perform these valid operations in any order and any numbers of times.

 

Input Format

The first line of input contains an integer T, denoting the number of the test cases.
Each of the next T lines contains a single string A.

Output Format

For each case, print the maximum length of the balanced string in a separate line.

*/

//Problem Link: https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/largest-balanced-string-bf93ce85/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                a++;
            if (s[i] == '{')
                b++;
            if (s[i] == '[')
                c++;
            if (s[i] == ')')
                a--;
            if (s[i] == '}')
                b--;
            if (s[i] == ']')
                c--;
        }
        cout << n - abs(a) - abs(b) - abs(c) << endl;
    }
}