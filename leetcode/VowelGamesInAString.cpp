class Solution {
public:
    bool isVowel(char ch) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        return vowels.count(ch) > 0;
    }
    bool doesAliceWin(string s) {
        int Count = 0;
        for (auto ch : s) {
            if(isVowel(ch)){
                Count++;
            }
        }
        return Count;
    }
};