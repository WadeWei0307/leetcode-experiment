class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int width = height.size() - 1;
        int ans = 0;
        int tmpArea;
        if (height.size() < 2) //沒有兩根柱子以上
            return 0;
        while (end > start) { //直到兩根重疊
            if (height[start] > height[end]) { //取短的那根當長
                tmpArea = height[end] * width;
                end--; //短的那邊往前找更長的
            }
            else { //取短的那根當長
                tmpArea = height[start] * width;
                start++; //短的那邊往後找更長的
            }
            width--;
            if (tmpArea > ans)
                ans = tmpArea;
        }
        return ans;
    }
};