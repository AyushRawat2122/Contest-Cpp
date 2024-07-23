#include <bits/stdc++.h>

using namespace std;

int piviot(vector<int>&arr , int low , int high){
    int piviot = arr[low];
    int h = high;
    int l = low;
    while(l <= h){
        while(arr[l] <= piviot && l <= high-1){
            l++;
        }
        while(arr[h] > piviot && h >= low+1){
            h--;
        }
        if(l<=h){swap(arr[l] , arr[h]);}
    }
    swap(arr[low], arr[h]);
    return h;
}

void quickSort(vector<int>&arr,int low, int high){
    if(low<high){
        int pIdx =  piviot(arr, low , high);
        quickSort(arr, low , pIdx-1);
        quickSort(arr, pIdx+1 , high);
    }
}

int main() {
     vector<int> ans = {0, 1, 4, 2, 9, 7, 12};
    quickSort(ans, 0, ans.size()-1);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}