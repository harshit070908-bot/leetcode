#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for(auto i : nums){
            auto inserted = seen.insert(i).second;
            if(!inserted) return 1;
        }

        return 0;
    }
};