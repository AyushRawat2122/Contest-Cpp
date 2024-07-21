//BruteForce Solution 

// class Solution {
// public:
//     string losingPlayer(int x, int y) {
//         int winner = 0;
//         while (x >= 1 && y >= 4) {
//             x -= 1;
//             y -= 4;
//             winner++;
//         }

//         if (winner % 2) {
//             return "Alice";
//         }
//         return "Bob";
//     }
// };

//Optimized approach 

class Solution {
public:
    string losingPlayer(int x, int y) {
        int yrounds = y / 4;
        int xrounds = x;
        int rounds = min(xrounds, yrounds);
        if (rounds%2) {
             return "Alice";  
        }
        return "Bob";
    }
};