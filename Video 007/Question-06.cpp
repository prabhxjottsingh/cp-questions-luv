#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int arr[150] = {-1};

        for (int i = 0; i < str1.size(); i++)
        {
            int t = str1[i];
            arr[t] = 1;
        }
        int count = 0;
        for (int i = 0; i < str2.size(); i++)
        {
            int t = str2[i];
            if (arr[t] == 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}