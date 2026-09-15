#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());

        for(size_t i {}; i < nums.size() - 1; i++){
            size_t left {i+1}, right {nums.size() - 1};
            while(left < right){
                if(nums[left] + nums[right] + nums[i] == 0){
                    result.push_back({nums[i], nums[left++], nums[right--]});
                    while(left < right && nums[left] == nums[left-1]) left++;
                    while(left < right && nums[right] == nums[right+1]) right--;
                }else if(nums[left] + nums[right] + nums[i] > 0) right--;
                else left++;
            }
            while(i < nums.size()-1 && nums[i] == nums[i+1]) i++;
        } 

        return result;
    }
};