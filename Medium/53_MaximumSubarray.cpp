#include <vector>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int maxSum {nums[0]}, currSum {};
        for(int& i : nums){
            currSum += i;
            maxSum = std::max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};