class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        getAllPermute(nums, result, 0, nums.size()-1);
        return result;
    }
    void getAllPermute(vector<int>& nums, vector<vector<int>>& result, int left, int right){
        if(left == right)
            result.push_back(nums);
        else{
            for(int i = left; i <= right; i++){
                swap(nums[i], nums[left]); //swap to change the head
                getAllPermute(nums, result, left+1, right);
                swap(nums[i], nums[left]); //swap to original input
            }
        }
    }
};