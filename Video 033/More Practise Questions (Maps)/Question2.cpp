//Problem Link: https://practice.geeksforgeeks.org/problems/twice-counter4236/1

class Solution
{
public:
    int countWords(string list[], int n)
    {
        map<string, int> m;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            m[list[i]]++;
        }
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second == 2)
                count++;
        }
        return count;
    }
};