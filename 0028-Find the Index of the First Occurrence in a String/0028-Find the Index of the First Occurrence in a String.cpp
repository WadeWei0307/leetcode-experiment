class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        int indexOfNeedle = 0;
        bool firstMatch = true;
        for(int i = 0; i<haystack.length(); i++){
            if(indexOfNeedle == needle.length())
                break;
            else if(haystack[i] == needle[indexOfNeedle]){
                if(firstMatch){
                    ans =i;
                    firstMatch = false;
                }
                indexOfNeedle += 1;
            }
            else{
                if(!firstMatch){
                    i = ans;
                    firstMatch = true;
                }
                indexOfNeedle = 0;
            }
        }
        if(indexOfNeedle != needle.length())
            return -1;
        else
            return ans;
    }
};