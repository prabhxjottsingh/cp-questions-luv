//problem Link: https://practice.geeksforgeeks.org/problems/find-the-frequency/1

int findFrequency(vector<int> v, int x)
{
    map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
            m[v[i]]++;
    }
    return m[x];
}