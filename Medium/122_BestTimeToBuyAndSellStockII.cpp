#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit {};

        int min {prices[0]};
        int max {prices[0]};

        for(size_t i {}; i < prices.size(); i++){
            if(max > prices[i]){
                profit += max - min;
                min = prices[i];
                max = prices[i];
            }else{
                max = prices[i];
            }
        }

        if(max > min){
            profit += max - min;
        }

        return profit;
    }
};