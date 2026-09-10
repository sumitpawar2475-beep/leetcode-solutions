// You are given an array prices where prices[i] is the price 
// of a given stock on the ith day.
// You want to maximize your profit by choosing a 
// single day to buy one stock and choosing a different day in 
// the future to sell that stock.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i=1; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);

            int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit , profit);
        }

        return maxProfit;
    }
};