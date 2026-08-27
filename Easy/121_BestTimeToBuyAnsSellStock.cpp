#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min {prices[0]}; // 7, 1, 1, 1, 1, 1
        int max {}; // 0, 0, 4, 4, 5, 5

        for(int i : prices){ // 7, 1, 5, 3, 6, 4
            if(i < min){
                min = i;
            }else{
                if(i - min > max){
                    max = i - min;
                }
            }
        }

        return max;
    }
};