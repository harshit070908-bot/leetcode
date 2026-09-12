#include <string>

class Solution {
public:
    bool backspaceCompare(std::string s, std::string t) {
        std::string s1 {};
        std::string t1 {};

        for(char i : s){
            if(i == '#'){
                if(!s1.empty()) s1.pop_back();
            }else{
                s1.push_back(i);
            }
        }

        for(char i : t){
            if(i == '#'){
                if(!t1.empty()) t1.pop_back();
            }else{
                t1.push_back(i);
            }
        }

        return (s1 == t1);
    }
};