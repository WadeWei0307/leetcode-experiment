class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> elementIndex; //記得元素的位置
        int lengthOfElement = 0;
        for(int i = 0; i < nums.size(); i++){
            if(!elementIndex.count(nums[i]))
                elementIndex[nums[i]] = i;
            else{
                lengthOfElement = i - elementIndex[nums[i]];
                elementIndex[nums[i]] = i;
                if(k>=lengthOfElement)
                    return true;
            }
        }
        return false;
    }
};