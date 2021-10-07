/*

Basically, vectors are array with dynamic size, they are a lot of similar to arrays;

We should always pass vectors by referrence in functions as this saves us a lot of memory, like if we pass a vector than a copy of vector is made in the function, which consumes O(n) complexity, which is obviously an expensive operation, thus to reduce this complexity, we use referrence oprator

*/

#include <bits/stdc++.h>
using namespace std;

template <class t>
void printvec(vector<t> &v)
{
    cout << endl
         << v.size() << " is the size of the printed vector." << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; //v.size() --> O(1)
    }
    cout << endl;
}

int main()
{

    int a[10]; //An array of size 10 of int type

    vector<int> v; // kind of array thing of datatype int only and its size is dynamic (i.e. user can input as many integers as many he want to)

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        printvec(v);
        v.push_back(x);
    }
    printvec(v);

    vector<int> p(9); //directly a vector is declared of size 9
    cout << endl
         << "A vector of a definite size is created: ";
    printvec(p);

    vector<int> vec(10, 3); //directly create a vector of size 10 and with 3 at each position
    cout << endl
         << "This vector is printed after adding same element on each position of an array: ";
    printvec(vec);

    vec.pop_back(); //deletes the element present on the last position of the vector complexity-> O(1)
    cout << endl
         << "This vector is printed after pop_back(): ";
    printvec(vec);

    vector<int> v2 = v; //creates a copy of v namely, v2, complexity->O(n)
    cout << endl
         << "This is a copy of v2: ";
    printvec(v2);

    vector<string> str;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    printvec(str);

    return 0;
}