#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2){
        std::vector<std::string> result;
        std::unordered_map<std::string, int> wordsMap {};

        std::string x {};
        for(char i : s1){
            if(i != ' ') x.push_back(i);
            else{
                wordsMap[x]++;
                x.clear();
            }
        }
        wordsMap[x]++;
        x.clear();
        for(char i : s2){
            if(i != ' ') x.push_back(i);
            else{
                wordsMap[x]++;
                x.clear();
            }
        }
        wordsMap[x]++;

        for(auto [key, value]: wordsMap){
            if(value == 1){
                result.push_back(key);
            }
        }

        return result;
    }
};