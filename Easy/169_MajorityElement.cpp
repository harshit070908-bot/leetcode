#include <vector>
#include <unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums){
        int result {nums[0]};
        std::unordered_map<int, int> freq;
        for(int i : nums){
            freq[i]++;
        }

        for(auto [key, value] : freq){
            if(value > nums.size()/2){
                result = key;
            }
        }

        return result;
    }
};