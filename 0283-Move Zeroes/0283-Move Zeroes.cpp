class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int changeLocation = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[changeLocation];
                nums[changeLocation++] = temp;
            }
        }
    }
};