#include <vector>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        int min {nums[0]};
        for(auto i : nums){
            if(i < min){
                min = i;
            }
        }

        int changes {};

        int first {min};
        int second {min};
        int third {min};

        for(int i {}; i<nums.size(); i++){
            if(nums[i] > first){
                third = second;
                second = first;
                first = nums[i];
                continue;
            }
            if(nums[i] > second && nums[i] != first){
                third = second;
                second = nums[i];
                continue;
            }
            if(nums[i] > third && nums[i] != second && nums[i] != first){
                third = nums[i];
            }    
        }
        return (third != second) ? third : first;
    }
};

//   3 2 1
// 1 3 3 3
// 1 1 2 2
// 1 1 1 1