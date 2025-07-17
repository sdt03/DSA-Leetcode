class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int lp = prices[0];
        int profit = 0;

        for(int i=0; i<n; i++){
            if(prices[i]<=lp)
                lp = prices[i];
            else{
                profit += prices[i]-lp;
                lp=prices[i];
            }
        }
        return profit;
    }
};
