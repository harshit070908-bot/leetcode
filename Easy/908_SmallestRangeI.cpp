#include <vector>

class Solution {
public:
    int smallestRangeI(std::vector<int>& nums, int k) {
        int min {nums[0]};
        int max {nums[0]};

        for(auto i : nums){
            if(i > max){
                max = i;
            }else if(i < min){
                min = i;
            }
        }

        if(max - min > 2 * k){
            return max - min - 2 * k;
        }else{
            return 0;
        }
    }
};