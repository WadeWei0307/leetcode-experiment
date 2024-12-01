class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int subsetsCount = 1 << nums.size(); //2^nums.size()
        for(int i = 0; i < subsetsCount; i++){ //000->001->...->111
            vector<int> subSets;
            for(int j = 0; j < nums.size(); j++){
                if(i & 1 << j) //Use 1 represent this element have appeared in this subset
                    subSets.push_back(nums[j]);
            }
            result.push_back(subSets);
        }
        return result;
    }
};