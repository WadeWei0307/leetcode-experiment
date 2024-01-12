class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int finalSize = 1; //return finally size
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                nums[finalSize] = nums[i];
                ++finalSize;
            }
        }
        return finalSize; 
    }
};