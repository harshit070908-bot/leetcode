#include <vector>


class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int pos {};
        for(int i {}; i<nums.size(); i++){
            if(nums[i] != 0){
                std::swap(nums[pos++], nums[i]);
            }
        }
    }
};