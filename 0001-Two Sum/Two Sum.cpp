class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashTable;       
        for(int i = 0; i < nums.size(); i++) {
            if(hashTable.find(target - nums[i]) == hashTable.end()) {
                hashTable[nums[i]] = i;
                continue;
            }            
            return {i, hashTable[target-nums[i]]};
        }
        return {0,0};
    }
};