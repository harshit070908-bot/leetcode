#include <vector>

class Solution {
public:
    bool isMonotonic(std::vector<int>& nums) {
        if(nums.size() == 1) return 1;

        int i {1};
        while(nums[i] == nums[i-1]){
            i++;
            if(i == nums.size()) return 1;
        }

        bool increasing {nums[i] > nums[i-1]};

        for(; i < nums.size(); i++){
            if(increasing){
                if(nums[i-1] > nums[i]){
                    return 0;
                }
            }else{
                if(nums[i-1] < nums[i]){
                    return 0;
                }
            }
        }

        return 1;
    }
};