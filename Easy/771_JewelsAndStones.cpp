#include <string>
#include <unordered_Set>

class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        int result {};

        std::unordered_set<char> jStones {jewels.begin(), jewels.end()};
        for(char i : stones){
            if(jStones.contains(i)){
                result++;
            }
        }

        return result;
    }
};