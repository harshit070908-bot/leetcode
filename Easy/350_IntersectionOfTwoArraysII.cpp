#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> freq;
        std::vector<int> result;

        for(auto i : nums1)
            freq[i]++;
        for(size_t i {}; i < nums2.size(); i++){
            if(freq[nums2[i]] > 0){
                result.push_back(nums2[i]);
                freq[nums2[i]]--;
            }
        }

        return result;
    }
};