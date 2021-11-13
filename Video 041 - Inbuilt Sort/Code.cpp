#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n); //address of the starting and ending point of the array, in which range we want to sort the array
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    sort(b + 2, b + n);
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;
    int z;
    cin >> z;
    vector<int> vect(z);
    for (int i = 0; i < z; i++)
        cin >> vect[i];
    sort(vect.begin(), vect.end());
    for (int i = 0; i < z; i++)
        cout << vect[i] << " ";
    cout << endl;
}

//Intro-Sort - mixture of 3 algos: heap, quick and insertion