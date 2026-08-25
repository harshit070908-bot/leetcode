#include <string>

class Solution {
public:
    bool repeatedSubstringPattern(std::string s) {
        bool result = 0;
        for(int i {1}; i <= s.size()/2; i++){
            if(s.size()%i != 0) continue;

            int index {i};
            std::string pattern = s.substr(0, i);
            while(index < s.size()){
                if(s.substr(index, i) != pattern){
                    break;
                }
                index += i;
            }
            if(index == s.size()) result = 1;
        }
        return result;
    }
};