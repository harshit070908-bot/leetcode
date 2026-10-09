#include <vector>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int m {candies[0]};
        for(int i : candies){
            m = (m > i) ? m : i;
        }

        std::vector<bool> result(candies.size());
        for(int i {}; i < candies.size(); i++){
            if(candies[i] + extraCandies >= m){
                result[i] = 1;
            }
        }

        return result;
    }
};