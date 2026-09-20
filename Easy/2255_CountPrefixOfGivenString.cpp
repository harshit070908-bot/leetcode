#include <vector>
#include <string>

class Solution {
public:
    int countPrefixes(std::vector<std::string>& words, std::string s) {
        int result {};
        for(auto i : words){
            int count {};
            for(auto j : i){
                if(j != s[count]){
                    count = -1;
                    break;
                }
                count++;
            }
            if(count != -1) result++;
        }

        return result;
    }
};