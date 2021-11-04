//Brute-Force:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[j] > a[i])
                break;
        }
        if (a[j] != a[i] && j != (n))
            cout << a[j];
        else
            cout << "-1";
        cout << " ";
    }
}

//using stacks

#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while ((!st.empty()) && (v[i] > v[st.top()]))
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    int n, i;
    cin >> n;
    vector<int> vect;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vect.push_back(x);
    }
    vector<int> nge = NGE(vect);
    for (i = 0; i < n; i++)
        cout << vect[i] << " " << ((nge[i] == (-1)) ? -1 : vect[nge[i]]) << endl;
}