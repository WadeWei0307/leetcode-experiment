class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int result = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            if(result + nums[i] < nums[i]) // if summation of previous element not bigger than current element
                result = nums[i];
            else
                result += nums[i];
            if(result >= max)
                max = result;
        }
        return max;
    }
};