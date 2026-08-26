#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        bool *arr = new bool [n+1] {};

        for(int i {}; i<n; i++){
            arr[nums[i]] = 1;
        }

        for(int i {}; i<n+1; i++){
            if(!arr[i]){
                delete[] arr;
                return i;
            }
        }

        delete[] arr;
        return -1;
    }
};