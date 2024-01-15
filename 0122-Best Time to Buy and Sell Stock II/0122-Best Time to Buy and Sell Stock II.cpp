class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) //只需要計算下一天比前一天大的收益並且累加起來，也會是最大的收益
                profit += prices[i] - prices[i - 1];
        }
        return profit;        
    }
};