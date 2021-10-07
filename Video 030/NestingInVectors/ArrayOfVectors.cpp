#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    vector<int> v[N]; //ArrayOfVectors
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x); //here v[i] is ith vector
        }
    }
    for (int i = 0; i < N; i++)
    {
        printvec(v[i]); //here v[i] is a vector
    }
    cout << v[0][0]; //thus it acts as a 2-D array, whose number of rows are fixed,and number if colunms of each row is dynamic
    return 0;
}