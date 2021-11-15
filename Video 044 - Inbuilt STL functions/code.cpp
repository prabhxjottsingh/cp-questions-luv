#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    auto mini = *min_element(v.begin(), v.end());
    cout << mini << endl;

    auto maxi = *max_element(v.begin(), v.end());
    cout << maxi << endl;

    int sum = accumulate(v.begin(), v.end(), 0); //0 is the inital value of the sum
    cout << sum << endl;

    //count function
    int ct = count(v.begin(), v.end(), 5); // count of 5
    cout << ct << endl;

    auto it = find(v.begin(), v.end(), 10);
    if (it != v.end())
        cout << *it << endl;
    else
        cout << "Element not found" << endl;

    reverse(v.begin(), v.end());
    for (auto &val : v)
        cout << val << " ";
    cout << endl;
    string s = "sbhfskjdn";
    reverse(s.begin(), s.end());
    for (auto val : s)
        cout << val;
    //same goes for array, just the only differnce is v.begin() = a, v.end() = a+n
}