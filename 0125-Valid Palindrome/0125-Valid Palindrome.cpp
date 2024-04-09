class Solution {
public:
    bool isPalindrome(string s) {
        if(s == "")
            return true;
        int head = 0, end = s.length()-1;
        while(head<end){
            if(!isalnum(s[head])){ //isalnum() standard library check if char is Alphanumeric which include letters and numbers
                head++;
            }
            else if(!isalnum(s[end])){
                end--;
            }
            else if(tolower(s[head]) != tolower(s[end])){
                return false;
            }
            else{
                head++;
                end--;
            }
        }
        return true;
    }
};