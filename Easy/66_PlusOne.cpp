#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        std::vector<int> result {digits};
        size_t size {result.size()};

        for(size_t i {size - 1}; i >= 0; --i){
            if(result[i] == 9){
                result[i] = 0;
                if(i == 0){
                    result.insert(result.begin(), 1);
                    break;
                }
                continue;
            }

            result[i] += 1;
            break;
        }

        return result;
    }
};