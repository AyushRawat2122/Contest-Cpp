#include <bits/stdc++.h>

using namespace std;
void Mg(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int l = low;
    int r = mid + 1;
    while (l <= mid && r <= high)
    {
        if (arr[l] <= arr[r])
        {
            temp.push_back(arr[l]);
            l++;
        }
        else
        {
            temp.push_back(arr[r]);
            r++;
        }
    }
    while (l <= mid)
    {
        temp.push_back(arr[l]);
        l++;
    }
    while (r <= high)
    {
        temp.push_back(arr[r]);
        r++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void MgSt(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    MgSt(arr, low, mid);
    MgSt(arr, mid + 1, high);
    Mg(arr, low, mid, high);
}

int main()
{
    vector<int> ans = {3, 1, 6, 2, 9, 7, 12};
    MgSt(ans, 0, ans.size() - 1);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}