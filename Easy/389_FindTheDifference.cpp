#include <string>
#include <array>

class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        std::array<int, 26> freq {};

        for(auto i : s){
            freq[i-'a']++;
        }

        for(auto i : t){
            if(freq[i-'a'] > 0){
                freq[i-'a']--;
            }else{
                return i;
            }
        }

        int i {};

        for(; i < freq.size(); i++){
            if(freq[i]){
                break;
            }
        }

        return 'a' + i;
    }
};