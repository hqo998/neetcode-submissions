class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestProfit = 0;
        for (int i {0}; i < prices.size(); i++) {
            int min = prices.at(i);
            for (int j {0}; j < i; j++) {
                if (prices.at(j) < min) {
                    min = prices.at(j);
                }
                
                
                
            }
            if (bestProfit < prices.at(i) - min) bestProfit = prices.at(i) - min;

        }

        return bestProfit;
    }
};
