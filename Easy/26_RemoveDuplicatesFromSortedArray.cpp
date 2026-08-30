#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int first {};
        int second {1};

        for(; second<nums.size(); second++){
            if(nums[first] != nums[second]){
                std::swap(nums[++first], nums[second]);
            }
        }

        return ++first;
    }
};