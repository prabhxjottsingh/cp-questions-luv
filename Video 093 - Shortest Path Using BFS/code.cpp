//Problem Link: https://www.spoj.com/problems/NAKANJ/

#include <bits/stdc++.h>
using namespace std;

const int N = 9;
vector<int> graph[N];
bool isVis[N][N] = {false};
int level[N][N] = {0};

vector<pair<int, int>> movements = {
    {-1, 2},
    {1, 2},
    {-1, -2},
    {1, -2},
    {2, -1},
    {2, 1},
    {-2, -1},
    {-2, 1},
};

bool isValid(int x, int y)
{
    if (x >= 8 || x < 0)
        return false;
    else if (y >= 8 || y < 0)
        return false;
    return true;
}

int getX(string s)
{
    return (s[0] - 'a');
}

int getY(string s)
{
    return (s[1] - '1');
}

int bfs(string source, string dest)
{
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);
    queue<pair<int, int>> q;
    q.push({sourceX, sourceY});
    isVis[sourceX][sourceY] = 1;
    while (!q.empty())
    {
        pair<int, int> v = q.front();
        int x = v.first, y = v.second;
        q.pop();
        for (auto &move : movements)
        {
            int childX = move.first + x;
            int childY = move.second + y;
            if (isValid(childX, childY) == false)
                continue;
            if (isVis[childX][childY] == false)
            {
                q.push({childX, childY});
                level[childX][childY] = level[x][y] + 1;
                isVis[childX][childY] = 1;
            }
        }
    }
    return level[destX][destY];
}

void reset()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            isVis[i][j] = false;
            level[i][j] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string source, dest;
        cin >> source >> dest;
        cout << bfs(source, dest);
        reset();
        cout << endl;
    }
}