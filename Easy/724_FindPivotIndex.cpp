#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int result {-1};

        std::vector<int> prefix {nums};
        size_t size {prefix.size()};
        for(size_t i {1}; i < size; i++){
            prefix[i] += prefix[i-1];
        }

        if(!prefix.empty() && !(prefix[size-1] - prefix[0])) return 0;

        for(size_t i {1}; i < size; i++){
            if(prefix[i-1] == prefix[size-1] - prefix[i]){
                result = i;
                break;
            }
        }
        
        return result;
    }
};