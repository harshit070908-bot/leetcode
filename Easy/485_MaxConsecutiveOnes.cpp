#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int max {};
        int curr {};
        for(size_t i {}; i < nums.size(); i++){
            if(nums[i] == 1){
                curr++;
                max = (max < curr) ? curr : max;
                continue;
            }
            curr = 0;
        }

        return max;
    }
};