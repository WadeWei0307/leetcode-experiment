class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
        int result = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (roman[s[i]] >= roman[s[i + 1]]) //如果比下一個大則表示可以直接加
                result += roman[s[i]];
            else //如果比下一個小則表示用減的
                result -= roman[s[i]];
        }
        result += roman[s[s.length() - 1]]; //要把最後一個加回去
        return result;
    }
};