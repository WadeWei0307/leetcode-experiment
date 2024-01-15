class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int hypotenuse = 1; //斜邊
        vector<vector<int>> ans;
        vector<int> tempAns;
        for (int level = 1; level <= numRows; level++) {
            int lastestIndex = level - 1; //該層最後一個Index
            int preLevel = level - 2; //前一層的值
            for (int indexOfLevel = 0; indexOfLevel < level; indexOfLevel++) {
                if (indexOfLevel == 0 || indexOfLevel == lastestIndex) //如果是第一個Index或當前Level的最後一個Index
                    tempAns.push_back(hypotenuse);
                else {
                    int exIndex = indexOfLevel - 1; //記錄前一個Index
                    tempAns.push_back(ans[preLevel][exIndex] + ans[preLevel][indexOfLevel]);
                }
            }
            ans.push_back(tempAns);
            tempAns.clear();
        }
        return ans;
    }
};