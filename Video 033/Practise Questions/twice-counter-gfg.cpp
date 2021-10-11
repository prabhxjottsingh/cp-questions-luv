// Question Link: https://practice.geeksforgeeks.org/problems/twice-counter4236/1#

class Solution
{
public:
    int countWords(string list[], int n)
    {
        map<string, int> m;
        for (int i = 0; i < n; i++)
            m[list[i]]++;
        int count = 0;
        for (auto pr : m)
        {
            if (pr.second == 2)
                count++;
        }
        return count;
    }
};