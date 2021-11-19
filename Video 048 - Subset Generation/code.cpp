#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;

void generate(vector<int> &subset, int i, vector<int> &nums)
{

    //base condition
    if (i == nums.size())
    {
        v.push_back(subset);
        return;
    }

    //ith element not included in the subset
    generate(subset, i + 1, nums);

    //ith element included in subset
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> empty;
    generate(empty, 0, nums);
    for (auto sub : v)
    {
        for (auto ele : sub)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}