//Using Vectors
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> days[n];
    for (int i = 0; i < n; i++)
    {
        int worker_num;
        cin >> worker_num;
        for (int j = 0; j < worker_num; j++)
        {
            int day;
            cin >> day;
            days[i].push_back(day);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //days[i], days[j] -> Time Complexity: O(N^2 * 30)
        }
    }
}