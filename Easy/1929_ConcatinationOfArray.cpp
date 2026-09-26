#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        size_t n {nums.size()};
        std::vector<int> result(n * 2);

        for(int i {}; i < n; i++){
            result[i] = nums[i];
            result[n + i] = nums[i];
        }

        return result;
    }
};