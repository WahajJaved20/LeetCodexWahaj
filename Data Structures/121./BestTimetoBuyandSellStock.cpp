class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < buyPrice){
                buyPrice = prices[i];
            }
            int currProfit = prices[i] - buyPrice;
            profit = max(profit,currProfit);
        }
        return profit;
    }
};
