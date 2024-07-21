// class Solution {
// public:
//     int minimumLength(string s) {
//         unordered_map<char,int>freq;
//         for(char ch : s){
//             freq[ch]++;
//         }
//         int count = 0;
//         for(auto it : freq){
//             int freq = it.second;
//             while(freq >= 3){
//                 freq-=2;
//             }
//             count+=freq;
//         }
//         return count;
//     }
// };

// A step more optimization

class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>freq;
        for(char ch : s){
            freq[ch]++;
        }
        int count = 0;
        for(auto it : freq){
            int freq = it.second;
            if(freq%2){
                count+=1;
            }else{
                count+=2;
            }
        }
        return count;
    }
};