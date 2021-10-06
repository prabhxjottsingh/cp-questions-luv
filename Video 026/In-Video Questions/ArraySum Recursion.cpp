//Print sum of array using recursion

#include <bits/stdc++.h>
using namespace std;

int sumArray(int a[], int n, int i)
{
    if (i != n)
    {
        cout << a[i] << " ";
        return sumArray(a, n, i + 1) + a[i];
    }
    else
        return 0;
}

int main()
{
    int a[3] = {1, 2, 3};
    cout << sumArray(a, 3, 0);
    return 0;
}