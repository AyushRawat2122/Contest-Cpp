#include <bits/stdc++.h>
using namespace std;
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long long int XOR = 0;
        for(int i = 0 ; i < N ; i++){
            XOR = XOR ^ Arr[i];
        }
        long long int rightMostSetBit = XOR & ~(XOR-1);
        long long bucket1 = 0;
        long long bucket2 = 0;
        
        for(int i = 0 ; i < N ; i++){
            if(Arr[i]&rightMostSetBit){
                bucket1 = bucket1 ^ Arr[i];
            }else{
                bucket2 = bucket2 ^ Arr[i];
            }
        }
        
        return {bucket1,bucket2};
        
    }
int main() {
    long long int arr[] = {4, 2, 4, 5, 2, 3, 3, 1};
    vector<long long int>ans =  twoOddNum(arr , 10);
    
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}