//brute-force approach
//Time-Complexity -> O(t*(q*(n+26))) = O(t*q*n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int hsh[26];
            for (int i = 0; i < 26; i++)
                hsh[i] = 0;

            l--;
            r--; //becasue string is starting from 0
            for (int i = l; i <= r; i++)
            {
                hsh[s[i] - 'a']++;
            }
            int oddCnt = 0;
            for (int i = 0; i < 26; i++)
            {
                if (hsh[i] % 2 != 0)
                    oddCnt++;
            }
            if (oddCnt > 1)
                cout << "No";
            else
                cout << "Yes";
            cout << endl;
        }
    }
    return 0;
}

//Optimised Approach
//Time-Complexity -> O(t*((N+n+(n*26))*(Q*26)) = O(t*n)

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[N][26];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 26; j++)
                hsh[i][j] = 0;
        }
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        { //++ the number of times a numebr appears at given index
            hsh[i + 1][s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        { //count the prefix sum of each array
            for (int j = 1; j <= n; j++)
            {
                hsh[j][i] += hsh[j - 1][i];
            }
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int oddCnt = 0;
            for (int i = 0; i < 26; i++)
            {
                int charCnt = hsh[r][i] - hsh[l - 1][i];
                if (charCnt % 2 != 0)
                    oddCnt++;
            }
            if (oddCnt > 1)
                cout << "No";
            else
                cout << "Yes";
            cout << endl;
        }
    }
    return 0;
}