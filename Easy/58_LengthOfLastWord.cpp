#include <string>
#include <cstdlib>

class Solution {
public:
    int lengthOfLastWord(std::string s){
        int result {};
        bool trimmed {};

        for(int i = s.size()-1; i >= 0; --i){
            if(!trimmed && !std::isalpha(s[i])){
                continue;
            }
            trimmed = 1;
            if(trimmed && std::isalpha(s[i])){
                result++;
            }else{
                break;
            }
        }

        return result;
    }
};