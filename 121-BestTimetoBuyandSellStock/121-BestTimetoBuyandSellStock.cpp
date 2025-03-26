// Last updated: 3/26/2025, 3:28:34 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                if (prices.size() < 2) return 0; 

        int minPrice = prices[0];  
        int maxProfit = 0;         

        for (int i = 1; i < prices.size(); ++i) {
            int currentPrice = prices[i];
            maxProfit = std::max(maxProfit, currentPrice - minPrice);
            minPrice = std::min(minPrice, currentPrice);
        }

        return maxProfit;
    }
};