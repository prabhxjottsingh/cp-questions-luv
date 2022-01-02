//For the better understanding of this code watch this luv's video he has explained things in an exeptional way, really thanks a lot to him for this :)
//Video Link: https://www.youtube.com/watch?v=wpWGDHmpbgA&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=63
#include <bits/stdc++.h>
using namespace std;

//represent the subset in the fomr of binary (this is what we basically call bitmasking)

vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    int no_of_subsets = (1 << n);
    vector<vector<int>> ans;
    for (int mask = 0; mask < no_of_subsets; mask++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if ( (mask & (1 << i)) != 0)
                subset.push_back(nums[i]);
        }
        ans.push_back(subset);
    }
    return ans;
}

//Time Complxity: O( n * (2^n))

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<int>> ans = subsets(v);
    for (auto a : ans)
    {
        for (auto b : a)
            cout << b << " ";
        cout << endl;
    }
}