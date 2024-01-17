class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    int startIndex = 0; //記住每一次的起點
    if (nums.size() < 1) //若nums沒有任何的元素
        return ans;
    for (int i = 0; i < nums.size(); i++) {
        if (i == nums.size()-1 || nums[i] + 1 != nums[i + 1]) { //前一個跟下一個不是連續的元素；同時處理是最後一個元素的時候
            if (i - startIndex > 0) { //起點跟終點有至少1個數量以上的元素
                ans.push_back(to_string(nums[startIndex]) + "->" + to_string(nums[i]));
                startIndex = i + 1; //將起點移至終點的下一個元素
            }
            else { //起點跟終點是同一個元素
                ans.push_back(to_string(nums[startIndex]));
                startIndex = i + 1; //將起點移至終點的下一個元素
            }
        }
    }
    return ans;
    }
};