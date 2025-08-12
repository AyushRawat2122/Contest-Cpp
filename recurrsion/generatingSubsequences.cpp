#include <bits/stdc++.h>
using namespace std;

void generateSubsequences(vector<int> &arr, vector<int> &temp, vector<vector<int>> &subsequences, int idx)
{
    if (idx == arr.size())
    {
        subsequences.push_back(temp);
        return;
    }
    temp.push_back(arr[idx]);
    generateSubsequences(arr, temp, subsequences, idx + 1);
    temp.pop_back();
    generateSubsequences(arr, temp, subsequences, idx + 1);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<vector<int>> subsequneces;
    vector<int> temp;
    generateSubsequences(arr, temp, subsequneces, 0);

    for (auto &subsequence : subsequneces)
    {
        for (int &i : subsequence)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}