class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,curr=prices[0];
        for(auto &c:prices)
        {
            if(c<curr)
            {
                curr=c;
            }
            else 
            {
                profit=max(profit,c-curr);
            }
        }
        return profit;
    }
};