#include <bits/stdc++.h>

using namespace std;

void BubbleSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size()-1; i++)
    {
        bool isSorted = false;
        for (int j = 0; j < nums.size() - i - 1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
                isSorted = true;
            }
        }
        if (isSorted == false)
        {
            break;
        }
    }
}

int main()
{
    vector<int> nums = {-5, 3, 7, 5, 5, -1, 2, 5, 1, -4};
    BubbleSort(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}