#include <vector>
#include <cmath>n

class Solution {
public:
    int findClosestNumber(std::vector<int>& nums) {
        int result {};
        int dist {std::abs(nums[0])};

        for(int i {}; i < nums.size(); i++){
            if(std::abs(nums[i]) < dist){
                dist = std::abs(nums[i]);
                result = i;
            }else if(nums[i] == dist){
                result = i;
            }
        }

        return nums[result];
    }
};