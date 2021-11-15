#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    //ds must be sorted before using lower and upper bound functions, if sorted, complexity is O(Log n), other wise complexity will be O(n)
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    //lower_bound finds either the element or the element greater than the requeired element in the data structure
    //lets say if we want to find 7 in a data structure, then either it will find 7 or the element greater than 7 stored in the array/vector

    //upper_bound finds the next greater element than the required element doesn't matter if the required element is present or not, it will always find the next greater element

    //upper bound and lower bound both return the location

    int *ptr = lower_bound(a, a + n, 5); //starting address as well as the ending address
    if (ptr == (a + n))
        cout << "No lower_bound exists";
    cout << *ptr << endl;

    int *up_bou = upper_bound(a, a + n, 47);
    if (up_bou == (a + n))
        cout << "No upper_bound exists";
    cout << *ptr << endl;
}

//FOR MAPS::::::::::::::

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    set<int> s;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    //maps adn sets are by default sorted only
    auto it = s.lower_bound(7); //in case of sets, this is an O(n) function so use accordingly
    cout << (*it) << endl;
    //in case of maps we can use lower and upper_bounds only on keys,
}