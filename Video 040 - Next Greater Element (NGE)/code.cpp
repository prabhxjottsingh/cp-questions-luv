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

//better Version

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define oneDay                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

vector<int> ngeFunction(vector<int> v)
{
    vector<int> ans;
    ans.push_back(-1);
    stack<int> st;
    int n = v.size();
    st.push(v[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (st.top() > v[i])
        {
            ans.push_back(st.top());
            st.push(v[i]);
        }
        else
        {
            while ((!st.empty()) && (st.top() < v[i]))
                st.pop();
            if (st.empty())
            {
                ans.push_back(-1);
            }
            else
                ans.push_back(st.top());
            st.push(v[i]);
        }
    }
    reverse(all(ans));
    return ans;
}

void solve()
{
    int i, n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> ans = ngeFunction(v);
    for (int i = 0; i < n; i++)
        cout << v[i] << " " << ans[i] << endl;
}

int main()
{
    oneDay
        ll tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
