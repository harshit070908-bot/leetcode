#include <vector>
#include <unordered_map>

class Solution {
public:
    int findLHS(std::vector<int>& nums) {
        std::unordered_map<int, int> freq;
        for(auto i : nums){
            freq[i]++;
        }

        int max = 0;
        for(auto [key, value] : freq){
            if(freq.contains(key+1)){
                int sum = value + freq[key+1];
                max = (max < sum) ? sum : max;
            }
        }

        return max;
    }
};