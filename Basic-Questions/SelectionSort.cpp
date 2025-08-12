#include <bits/stdc++.h>

using namespace std;

void SelectionSort(vector<int>&nums){
    int n = nums.size()-1;
    for(int i = n; i >= 0 ; i--){
      int maxidx = 0;  
      for(int j = 0; j <= i; j++)
        {
            if(nums[j] > nums[maxidx]){
                maxidx = j;
            }
        }
        swap(nums[maxidx],nums[i]);
    }
}

int main() {
    vector<int>nums = {-5,3,7,-1,2};
    InsertionSort(nums);
    for(auto it : nums){
        cout<<it<<" ";
    }
    return 0;
}