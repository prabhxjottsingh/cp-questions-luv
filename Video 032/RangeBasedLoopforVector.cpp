#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 23, 4, 56};
    for (auto x : v)
        cout << x << " "; //in range based lops copies of values are printed not actial values
    //for performing operations on actual values, rather than on copied ones, reference operator is used;
    for (auto a : v)
        a++;
    cout << endl;
    for (auto x : v)
        cout << x << " ";

    for (auto &a : v)
        a++;
    cout << endl;
    for (auto x : v)
        cout << x << " ";
    return 0;
}