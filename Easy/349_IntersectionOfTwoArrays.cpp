#include <vector>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        short* freq = new short [1001] {};

        for(auto i : nums1){
            freq[i]++;
        }

        std::vector<int> output;
        
        for(auto i : nums2){
            if(freq[i] >= 1){
                output.push_back(i);
                freq[i] = 0;
            }
        }


        delete[] freq;
        return output;
    }
};