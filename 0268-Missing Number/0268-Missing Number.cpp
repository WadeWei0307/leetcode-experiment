class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalCount = nums.size();
        int ans;
        ans = ((0 + totalCount) * (totalCount-0+1)) / 2; //先總和nums長度
        for (int i = 0; i < nums.size(); i++) { 
            ans -= nums[i]; //再減去nums裡面的所有元素
        }
        return ans;
    }
};