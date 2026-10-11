#include <vector>

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int result {};

        for(int i {}; i < nums.size(); i++){
            for(int j {i + 1}; j < nums.size(); j++){
                if(nums[i] == nums[j]) result++;
            }
        }

        return result;
    }
};