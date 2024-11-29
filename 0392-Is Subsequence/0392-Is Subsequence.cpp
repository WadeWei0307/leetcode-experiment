class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointS = 0;
        int pointT = 0;
        while(pointS < s.length() && pointT < t.length()){
            if(s[pointS] == t[pointT]){
                pointS++;
                pointT++;
            }
            else
                pointT++;                
        }
        return pointS==s.length();
    }
};