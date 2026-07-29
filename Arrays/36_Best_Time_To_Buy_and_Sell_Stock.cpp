/*
class Solution {
public:
    int maxProfit(vector<int>& prices)
     {
        int i,j;
        int n = prices.size();
        int diff = 0;
        int profit = 0;
        for(i=0;i<n;i++)      // TLE
        {
            for(j=i+1 ; j < n ; j++)
            {
                diff = prices[j]-prices[i];
                profit = max(profit,diff);
            }
        }
        return profit;
    }
};
*/


class Solution {
public:
    int maxProfit(vector<int>& prices)
     {
        int i,j;
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;
        for(i=0;i<n;i++)
        {
            buy = min(buy,prices[i]);
            profit = max(profit, prices[i]-buy); // ismei na max(sell,prices[i]) nhi krskte coz max value buy se phle store hojegi
        } // had to store sell when its after buy value
        return profit;
    }
};