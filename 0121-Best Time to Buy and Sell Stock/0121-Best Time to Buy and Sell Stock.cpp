class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int bestBenefit = 0;
        int tempBenefit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < min)
                min = prices[i];
            else
                tempBenefit = prices[i] - min;
            if(tempBenefit > bestBenefit)
                bestBenefit = tempBenefit;
        }
        return bestBenefit;
    }
};