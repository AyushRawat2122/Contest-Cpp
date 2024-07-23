#include <bits/stdc++.h>

using namespace std;

bool getSubseq(int n, vector<int> &ds, vector<int> &arr, int target)
{
    if (n == arr.size())
    {
        int sum = 0;
        for (auto it : ds)
        {
            sum += it;
        }
        if (sum == target)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ds.push_back(arr[n]);
    if (getSubseq(n + 1, ds, arr, target))
    {
        return true;
    }
    ds.pop_back();
    if (getSubseq(n + 1, ds, arr, target))
    {
        return true;
    }

    return false;
}
int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 8};
    vector<int> ds;
    cout << getSubseq(0, ds, arr, 119);
    return 0;
}