class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1 = prices[0], buy2 = prices[0];
        int profit1 = 0, profit2 = 0;
        for(int i=0;i<prices.size();i++){
            int p=prices[i];
            buy1=min(buy1,p);
            profit1=max(profit1,p-buy1);
            buy2=min(buy2,p-profit1);
            profit2=max(profit2,p-buy2);
        }
        return profit2;
    }
};