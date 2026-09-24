#include <string>

class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        int result {};

        for(size_t i {}; i < columnTitle.length() ; i++){
            result = result * 26 + (columnTitle[i] - 'A' + 1);
        }

        return result;
    }
};