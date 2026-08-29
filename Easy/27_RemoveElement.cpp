#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int left {};

        for(int right {}; right<nums.size(); right++){
            if(nums[right] != val){
                nums[left++] = nums[right];
            }
        }

        return left;
    }
};