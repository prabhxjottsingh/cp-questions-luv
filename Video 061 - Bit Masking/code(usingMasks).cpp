Question Link : https : //codeforces.com/blog/entry/73558

#include <bits/stdc++.h>
using namespace std;

void printBinary(int x)
{
    int i = 0;
    for (int i = 32; i >= 0; i--)
    {
        bool z = (x & (1 << i));
        cout << z;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> masks(n, 0);
    for (int i = 0; i < n; i++)
    {
        int mask = 0;
        int worker_num;
        cin >> worker_num;
        for (int j = 0; j < worker_num; j++)
        {
            int day;
            cin >> day;
            mask = (mask | (1 << day));
        }
        masks[i] = mask;
    }

    for (int i = 0; i < n; i++)
    {
        cout << masks[i] << " ->  ";
        printBinary(masks[i]);
    }

    int person1 = 0, person2 = 0, max_days = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int intersection = (masks[i] & masks[j]);
            int common_days = __builtin_popcount(intersection);
            cout << i << "->" << masks[i] << " " << j << "->" << masks[j] << " = " << common_days << endl;

            if (common_days > max_days)
            {
                person1 = i;
                person2 = j;
                max_days = common_days;
            }
        }
    }
    cout << endl;
    cout << person1 << " " << person2 << " " << max_days;
}