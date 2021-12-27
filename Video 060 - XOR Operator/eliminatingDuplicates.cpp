#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;
    for (int i = 0; i < size; i++)
        ans ^= arr[i];
    cout << ans;
}