#include <vector>
#include <unordered_Set>
#include <array>
#include <string>

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::unordered_set<std::string> convertedCodeSet;
        
        std::array<std::string, 26> morseCode {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        for(const std::string& i : words){
            std::string convertedCode {};
            for(char j : i){
                convertedCode.append(morseCode[j - 'a']); 
            }
            convertedCodeSet.insert(convertedCode);
        }

        return convertedCodeSet.size();
    }
};