#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        size_t n {nums.size()};

        for(int i {1}; i < n; i++){
            nums[i] += nums[i-1];
        }

        return nums;
    }
};