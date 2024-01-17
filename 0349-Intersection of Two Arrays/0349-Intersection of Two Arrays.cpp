class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> elementExist;
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) { //將nums1出現過的元素存進hash table並設成TRUE
            if (!elementExist.count(nums1[i]))
                elementExist[nums1[i]] = true;
        }
        for (int i = 0; i < nums2.size(); i++) { //將nums2曾經出現在nums1的元素推進ans，並且只推一次
            if (elementExist[nums2[i]]) {
                ans.push_back(nums2[i]);
                elementExist[nums2[i]] = false;
            }
        }
        return ans;
    }
};