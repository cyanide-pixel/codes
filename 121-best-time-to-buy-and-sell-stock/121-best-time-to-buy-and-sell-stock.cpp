class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int msf = prices[0], profit =0, maxProfit=0;
        
        for(int i =0; i <prices.size(); i++)
        {
            if(prices[i]<msf) msf = prices[i];
            profit = prices[i]- msf;
            if(profit>maxProfit) maxProfit=profit;
        }
        
        return maxProfit;
    }
};