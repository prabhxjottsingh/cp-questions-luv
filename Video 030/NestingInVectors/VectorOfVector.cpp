/*

Need of Vector Of Vectors-> just like array, array of vectors are also of fixed size, so 
in order to overcome this problem vector of vecotr is introduced

the only difference between AOV and VOV is that in case of VOV rows and colunms both are dynamic, i.e. we can
change both of theirs size.

printing of the both things are same, whil inouting the data in VOV we just have to take carfe that we must input 
a vector in vector that is declared earlier


*/

#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v; //if we write vector<int> v;   then v[0] is an integer
                           //if we write vector<int> v[i]; then v[0] is an array
                           //if we write vector<vector<int>> v; then v[0] is an vector
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);         //we have input a number in vector v[0]
    v.push_back(vector<int>()); //we have input a vector in vector v.
    for (int i = 0; i < v.size(); i++)
    {
        printvec(v[i]);
    }
    return 0;
}