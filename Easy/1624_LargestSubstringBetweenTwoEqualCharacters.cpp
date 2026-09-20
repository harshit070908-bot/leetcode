#include <string>
#include <unordered_map>

class Solution {
public:
    int maxLengthBetweenEqualCharacters(std::string s) {
        int result {-1};
        std::unordered_map<char, int> index;

        for(int i {}; i < s.length(); i++){
            bool inserted = index.insert({s[i], i}).second;
            if(!inserted){
                result = std::max(result, i - index[s[i]] - 1);
            }
        }

        return result;
    }
};