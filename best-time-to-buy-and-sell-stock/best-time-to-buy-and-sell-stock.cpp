class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0; int maxp = 0;
        int msf= INT_MAX;
        
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]<msf) msf=prices[i];
            profit = prices[i] - msf;
            maxp = max(profit, maxp);
        }
        
        
        return maxp;
    }
};