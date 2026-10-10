#include <string>
#include <vector>
#include <unordered_set>

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        int result {};

        std::unordered_set<char> ac;
        for(char i : allowed){
            ac.insert(i);
        }

        for(std::string& i : words){
            for(char j : i){
                if(!ac.contains(j)){
                    result--;
                    break;
                }
            }
            result++;
        }

        return result;
    }
};