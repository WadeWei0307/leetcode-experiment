class NumArray {
public:
    vector<int> tmpAns;
    NumArray(vector<int>& nums) {
        tmpAns.resize(nums.size(), nums[0]);
        for (int i = 1; i < nums.size(); i++) { //tmpAns存放累加值
            tmpAns[i] = nums[i] + tmpAns[i - 1]; //當下的值+前面的累加值
        }
    }
    
    int sumRange(int left, int right) {
        return left == 0 ? tmpAns[right]: tmpAns[right] - tmpAns[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */