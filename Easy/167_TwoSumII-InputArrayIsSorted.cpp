#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target){
        int left{};
        int right = numbers.size() - 1;

        std::vector<int> v(2);

        while(left < right){
            if(target == numbers[left] + numbers[right]){
                v[0] = left+1;
                v[1] = right+1;
                break;
            }else if(target < numbers[left] + numbers[right]) right--;
            else left++;
        }

        return v;
    }
};