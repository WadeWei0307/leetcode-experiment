class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        for(int i = s.length() - 1; i >= 0; i--){
            if(int(s[i]) == 32 && ans == 0) continue; //last word is space
            else if(int(s[i]) == 32) break; //next time meet the space
            else ans+=1;
        }
        return ans;
    }
};