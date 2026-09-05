#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int result {-1};
        for(int i {}; i < nums.size(); i++){
            if(target <= nums[i]){
                result = i;
                break;
            }
        }
        return (result == -1) ? nums.size() : result;
    }
};