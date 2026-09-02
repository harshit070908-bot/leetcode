#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;

        std::unordered_map<int, int> m;
        for(int i {}; i < nums.size(); i++){
            int needed = target - nums[i];

            if(m.contains(needed)){
                result = {m[needed], i};
                break;
            }

            m[nums[i]] = i;
        }

        return result;
    }
};