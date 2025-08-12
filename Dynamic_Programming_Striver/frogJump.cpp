#include <bits/stdc++.h> 
// int jumps(int n, vector<int> &heights , vector<int>&dp){
//     if(n == 0){
//         return 0;
//     }
//     if(dp[n] != -1) return dp[n];
//     int jump1 = INT_MAX , jump2 = INT_MAX;
    
//     jump1 = abs(heights[n] - heights[n-1]) + jumps(n-1 , heights, dp);
    
//     if(n-2 >= 0){
//         jump2 = abs(heights[n] - heights[n-2]) + jumps(n-2 , heights, dp);
//     }

//     dp[n] = min(jump1,jump2);
//     return dp[n];
// }
int frogJump(int n, vector<int> &heights)
{
    // vector<int>dp(n , -1);
    // return jumps(n-1 , heights , dp);
    vector<int>dp(n , 0);
    dp[0] = 0;
    for(int i = 1 ; i < n ; i++){
        int left = dp[i-1] + abs(heights[i] - heights[i-1]);
        int right = INT_MAX;
        if(i > 1){
            right = dp[i-2] +  abs(heights[i] - heights[i-2]);
        }
        dp[i] = min(left , right);
    }
    return dp[n-1];
}