class Solution {
public:
    int climbStairs(int n) {
        vector<int> tempAns = {1,1};
        if(n < 2)
            return 1;
        for(int i = 2; i <=n; i++){
            tempAns.push_back(tempAns[i-1]+tempAns[i-2]);
        }
        return tempAns[tempAns.size()-1];
    }
};