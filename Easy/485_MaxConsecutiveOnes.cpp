#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int max {};
        int curr {};
        for(size_t i {}; i < nums.size(); i++){
            if(nums[i] == 1){
                curr++;
                continue;
            }
            max = std::max(max, curr);
            curr = 0;
        }

        max = std::max(max, curr);

        return max;
    }
};