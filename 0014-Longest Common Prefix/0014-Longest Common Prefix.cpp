class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());   //字串陣列排序，會依據每個字元排列，會先找每個陣列第一個字元最小的擺到陣列第一個元素，依此類推
        string ans = "";
        for(int i = 0; i < strs[0].length(); i++){
            if(strs[0][i] == strs[strs.size()-1][i]) //排序完後，我們只需要比陣列中的第一個及最後一個的字串即可
                ans += strs[0][i];
            else
                break;
        }
        return ans;
    }
};