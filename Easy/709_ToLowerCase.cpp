#include <string>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        for(auto& i : s){
            if(i <= 'Z' && i >= 'A'){
                i += 'a' - 'A';
            }
        }
        return s;
    }
};