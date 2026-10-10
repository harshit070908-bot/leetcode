#include <string>
#include <vector>
#include <unordered_set>

class Solution {
public:
    int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
        std::unordered_set<char> chars(allowed.begin(), allowed.end());
        int result {};

        for(std::string& word : words) {
            bool valid = true;

            for(char c : word) {
                if(!chars.count(c)) {
                    valid = false;
                    break;
                }
            }

            if(valid) result++;
        }

        return result;
    }
};