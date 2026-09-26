#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string result {};
        
        int first {};
        int second {};

        while(first != word1.length() || second != word2.length()){
            if(first != word1.length()) result.push_back(word1[first++]);
            if(second != word2.length()) result.push_back(word2[second++]);
        }

        return result;
    }
};