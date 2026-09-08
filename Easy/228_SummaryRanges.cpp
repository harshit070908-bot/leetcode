#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        std::vector<std::string> result;
        for(int i {}; i < nums.size(); i++){
            int curr {nums[i]};
            while(i+1 < nums.size() && nums[i] + 1 == nums[i+1]){
                i++;
            }
            (curr == nums[i]) ? result.push_back(std::to_string(nums[i])) : result.push_back(std::to_string(curr) + "->" + std::to_string(nums[i]));
        }
        return result;
    }
};