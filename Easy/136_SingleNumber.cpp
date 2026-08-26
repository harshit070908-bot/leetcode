#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result {};
        for(auto i : nums){
            result ^= i;
        }
        return result;
    }
};