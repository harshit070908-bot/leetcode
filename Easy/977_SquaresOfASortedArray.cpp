#include <vector>
#include <cstdlib>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        std::vector<int> squared(nums.size());

        int left {};
        int right = nums.size() - 1;
        int k = right;

        while(left <= right){
            if(std::abs(nums[left]) < std::abs(nums[right])){
                squared[k--] = nums[right] * nums[right--];
            }else{
                squared[k--] = nums[left] * nums[left++];
            }
        }

        return squared;
    }
};