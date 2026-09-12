#include <string>

class Solution {
public:
    std::string removeDuplicates(std::string s) {
        std::string result {};

        for(char i : s){
            if(!result.empty() && i == result.back()){
                result.pop_back();
                continue;
            }
            result.push_back(i);
        }

        return result;
    }
};