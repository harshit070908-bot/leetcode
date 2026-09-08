#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(const std::string& s){
        int result {};
        size_t size {s.length()};

        std::unordered_map<char, int> symbol {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for(size_t i {}; i < size; i++){
            if(i + 1 < size){
                if(symbol[s[i]] < symbol[s[i+1]]){
                    result -= symbol[s[i]];
                    continue;
                }
            }
            result += symbol[s[i]];
        }

        return result;
    }
};