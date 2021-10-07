#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p; //Pair Container is used to store two values
    //p = make_pair(12, "prabh");
    p = {12, "Prabh"};
    pair<int, string> &p1 = p; //by refrence p1 and p are made similar
    p1.first = 3;
    cout << p.first << " " << p.second << endl;

    //Pair is mainly used to just maintain relation between two things.

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];

    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    for (int i = 0; i < 3; i++)
        cout << p_array[i].first << " " << p_array[i].second << endl;

    cout << "After swapping First and last numbers of the array: " << endl;
    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
        cout << p_array[i].first << " " << p_array[i].second << endl;

    //For taking inputs
    cin >> p.first;
    cin >> p.second;

    return 0;
}