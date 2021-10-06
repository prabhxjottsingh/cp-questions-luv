//Time Complexity: O(n) - Merging Step
//Time complexity: O(log n) - Sorting Step
//Total Time Complexity - O(n*log n)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int arr[N];

void mergingArrays(int l, int r, int mid)
{ //there are two arrays, this function is for merging, one array is from l to mid, and another is from mid to r
    int l_sz = mid - l + 1;
    int L[l_sz + 1];
    int r_sz = r - mid;
    int R[r_sz];
    for (int i = 0; i < l_sz; i++)
        L[i] = arr[i + l];
    for (int i = 0; i < r_sz; i++)
        R[i] = arr[i + mid + 1];
    L[l_sz] = R[r_sz] = INT_MAX;
    int l_first = 0;
    int r_first = 0;
    for (int i = l; i <= r; i++)
    {
        if (L[l_first] <= R[r_first])
        {
            arr[i] = L[l_first];
            l_first++;
        }
        else
        {
            arr[i] = R[r_first];
            r_first++;
        }
    }
}

void mergeSort(int l, int r) //time complexity of this function is O(log n), and it is for breaking the array in two parts
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    mergingArrays(l, r, mid);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}