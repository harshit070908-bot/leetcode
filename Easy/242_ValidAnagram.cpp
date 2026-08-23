#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        int count [26] {};
        
        for(char c : s){
            count[c-'a']++;
        }

        for(char c : t){
            count[c-'a']--;
        }

        for(int x : count){
            if(x != 0){
                return 0;
            }
        }

        return 1;
    }
};