#include <bits/stdc++.h>

using namespace std;

int piviot(vector<int>&arr , int low , int high){
    int piviot = arr[high];
    int i = low - 1;
    for(int j = low ; j <= high-1 ; j++){
        if(arr[j] < piviot ){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
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