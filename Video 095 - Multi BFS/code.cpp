#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 7;
const int INF = 1e9 + 7;
int val[N][N];
int isVis[N][N];
int lev[N][N];
int n, m;
vector<pair<int, int>> movements = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

bool isValid(int i, int j)
{
    if (i >= n || i < 0)
        return false;
    if (j >= m || j < 0)
        return false;
    return true;
}

int bfs()
{
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            maxVal = max(maxVal, val[i][j]);
        }
    }
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maxVal == val[i][j])
            {
                q.push({i, j});
                lev[i][j] = 0;
                isVis[i][j] = 1;
            }
        }
    }
    int res = 0;
    while (!q.empty())
    {
        pair<int, int> val = q.front();
        int valX = val.first;
        int valY = val.second;
        q.pop();
        for (auto &move : movements)
        {
            int childX = valX + move.first;
            int childY = valY + move.second;
            if (!isValid(childX, childY) || isVis[childX][childY])
                continue;
            q.push({childX, childY});
            isVis[childX][childY] = 1;
            lev[childX][childY] = lev[valX][valY] + 1;
            res = max(res, lev[childX][childY]);
        }
    }
    return res;
}

void reset()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            isVis[i][j] = 0;
            lev[i][j] = INF;
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> val[i][j];
            }
        }
        cout << bfs() << endl;
        reset();
    }
}