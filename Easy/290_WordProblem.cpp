#include <string>

class Solution {
public:
    bool wordPattern(std::string pattern, std::string s) {
        std::string arr [26] {};
        int curr {};
        for(int i {}; i<pattern.size(); i++){
            std::string word {""};

            while(curr < s.size() && s[curr] != ' '){
                word.push_back(s[curr++]);
            }

            if(curr < s.size()){
                curr++;
            }

            int patternPos {pattern[i] - 'a'};

            if(arr[patternPos].empty()){
                for (int j{}; j < 26; j++) {
                    if (arr[j] == word && j != patternPos) {
                        return 0;
                    }
                    arr[patternPos] = word;
                }
            }else{
                if(arr[patternPos] != word){
                    return 0;
                }
            }
        }
        if(curr < s.size()) return 0;
        return 1;
    }
};