class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1, 1);
        unsigned long  temp = 1;
        for (int i = 1; i < rowIndex; i++) {
            temp = temp * (rowIndex - i + 1) / i;
            ans[i] = temp;
        }
        return ans;
    }
};