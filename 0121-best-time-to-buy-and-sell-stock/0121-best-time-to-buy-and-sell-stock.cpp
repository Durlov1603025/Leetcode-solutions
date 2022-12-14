class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell,income=0, profit=0;
        int n = prices.size();
        
        for(int i =0 ; i<n; i++)
        {
            if(prices[i]<buy)
            {
                buy = prices[i];
            }
            else
            {
                sell = prices[i];
                income = sell - buy;
            }
            if(income > profit) 
                profit = income;
        }
        return profit; 
    }
};