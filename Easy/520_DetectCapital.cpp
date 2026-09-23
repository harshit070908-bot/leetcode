#include <string>
#include <cstdlib>

class Solution {
public:
    bool detectCapitalUse(std::string word) {
        if(word.length() == 1) return 1;
        if(std::isupper(word[0])){
            bool lower = std::islower(word[1]);
            for(size_t i {2}; i < word.length(); i++){
                if(lower){
                    if(std::isupper(word[i])) return 0;
                }else{
                    if(std::islower(word[i])) return 0;
                }
            }
        }else if(std::islower(word[0])){
            for(size_t i {}; i < word.length(); i++){
                if(std::isupper(word[i])) return 0;
            }
        }

        return 1;
    }
};