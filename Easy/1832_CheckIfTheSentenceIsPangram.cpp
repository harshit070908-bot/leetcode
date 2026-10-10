#include <string>
#include <unordered_set>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        std::unordered_set<char> chars(sentence.begin(), sentence.end());
        return chars.size() == 26;
    }
};