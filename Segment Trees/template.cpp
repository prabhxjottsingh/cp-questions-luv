#include <bits/stdc++.h>
using namespace std;

class SGTree
{
private:
    vector<int> segTree;

public:
    SGTree(int n)
    {
        segTree.resize(4 * n + 1);
    }

    void buildSegTree(int idx, int low, int high, int arr[])
    {
        if (low == high)
        {
            segTree[idx] = arr[low];
            return;
        }

        int mid = (low + high) / 2;
        buildSegTree(2 * idx + 1, low, mid, arr);
        buildSegTree(2 * idx + 2, mid + 1, high, arr);
        segTree[idx] = min(segTree[2 * idx + 1], segTree[2 * idx + 2]);
    }

    int query(int idx, int low, int high, int l, int r)
    {

        if (r < low || high < l)
            return INT_MAX;

        if (low >= l && high <= r)
            return segTree[idx];

        int mid = (low + high) >> 1;
        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        return min(left, right);
    }

    void update(int idx, int low, int high, int i, int val)
    {

        if (low == high)
        {
            segTree[idx] = val;
            return;
        }

        int mid = (low + high) >> 1;

        if (i <= mid)   
            update(2 * idx + 1, low, mid, i, val);
        else
            update(2 * idx + 2, mid + 1, high, i, val);

        segTree[idx] = min(segTree[2 * idx + 1], segTree[2 * idx + 2]);
    }
};

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SGTree segTreeOne(n);
    segTreeOne.buildSegTree(0, 0, n - 1, arr);
    int q;
    cin >> q;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int l, r;
            cin >> l >> r;
            cout << segTreeOne.query(0, 0, n - 1, l, r) << endl;
        }
        else
        {
            int i, val;
            cin >> i >> val;
            segTreeOne.update(0, 0, n - 1, i, val);
            arr[i] = val;
        }
    }
}

int main()
{
    solve();
    return 0;
}