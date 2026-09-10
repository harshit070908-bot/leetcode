#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex){
        std::vector<int> result;

        for(int i {}; i <= rowIndex; i++){
            for(int j{i-1}; j > 0; j--){
                result[j] += result[j-1];
            }
            result.push_back(1);
        }

        return result;
    }
};