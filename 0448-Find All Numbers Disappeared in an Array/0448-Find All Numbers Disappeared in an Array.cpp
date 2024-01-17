class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> vote(nums.size() + 1, false); //因為需要1~nums.size的空間，所以需要+1
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) { //將出現過的數字n於vote的第n個位置變成TRUE
            if (!vote[nums[i]])
                vote[nums[i]] = true;
        }
        for (int i = 1; i <= nums.size(); i++) { //從1~nums.size找出vote為false的位置
            if (!vote[i])
                ans.push_back(i);
        }
        return ans;
    }
};