/*

iterators are structures like pointers
in case of csome containers like maps, etc. we cant directly access its value, so we use iterators to access the values in case of such containers.

.begin() --> points to the value at first position
.end()   --> points to the value at next to the last position

difference between it+a and it++ in iterators -> 
it++ -> moves to next iterator
it+1 -> moves to next location

by chanve in case of vectos there is not any difference between it++ and it+1, becasue the next value stored in a vector is at next iterator as well as at next location in case of vectors

but this thing would be different in ahead cases because, 
Maps and sets are not as continuos as these: 
in such cases, it+1 takes you to next location which doesn't work in maps and sets.
but on the other hand it++ takes us to the next iterator which does work, i.e. it would print the next element stored in maps/sets

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {12, 45, 67, 88, 34, 324, 545, 65};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl
         << endl
         << endl;

    vector<int>::iterator it = v.begin();
    cout << *it;

    cout << endl;

    cout << *(it + 1);

    cout << endl
         << endl
         << endl;

    for (int i = 0; i != v.size(); i++)
        cout << *(it + i) << " ";

    cout << endl
         << endl
         << endl;

    for (it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";

    cout << endl
         << endl
         << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {4, 5}};
    vector<pair<int, int>>::iterator its;
    for (its = v_p.begin(); its != v_p.end(); its++)
        cout << (*its).first << " " << (*its).second << endl;

    cout << endl
         << endl
         << endl;

    for (its = v_p.begin(); its != v_p.end(); its++)
        cout << its->first << " " << its->second << endl; //in case of pairs we can use arrow operator too

    return 0;
}