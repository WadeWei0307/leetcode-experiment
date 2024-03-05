class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0)
            return 0;
        int start = 0, end = 0, maxLength = 0;
        map<char, int> symbol2Idx;
        for(int i = 0; i < s.length(); i++){
            if(!symbol2Idx.count(s[i])){
                symbol2Idx[s[i]] = i;
                end = i;
            }
            else{
                if(symbol2Idx[s[i]] >= start){ //duplicate word is behind the start
                    maxLength = (i - 1) - start + 1 > maxLength ? (i - 1) - start + 1 : maxLength;
                    start = symbol2Idx[s[i]] + 1; //duplicate symbol next index
                }
                else{ //duplicate word is in front of the start
                    maxLength = i - start + 1 > maxLength ? i - start + 1 : maxLength;
                }
                symbol2Idx[s[i]] = i; //update the index of duplicate symbol
            }
        }
        maxLength = end - start + 1 > maxLength ? end - start + 1 : maxLength; //if none of duplicate word
        return maxLength;
    }
};