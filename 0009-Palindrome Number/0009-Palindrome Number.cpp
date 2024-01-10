class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int tempx = x;
        int palindrome = 0;
        while(tempx != 0){
            if(palindrome < INT_MIN / 10 || palindrome > INT_MAX / 10)
                break;
            palindrome = palindrome*10 + tempx%10;
            tempx /= 10;
        }
        if(palindrome == x)
            return true;
        else
            return false;
    }
};