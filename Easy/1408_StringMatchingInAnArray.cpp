#include <vector>
#include <string>
#include <unordered_set>

class Solution {
public:
    std::vector<std::string> stringMatching(std::vector<std::string>& words) {
        std::unordered_set<std::string> result;

        for(int i {}; i < words.size(); i++){
            for(int j {i+1}; j < words.size(); j++){
                if(words[i].find(words[j]) != std::string::npos){
                    result.insert(words[j]);
                }else if(words[j].find(words[i]) != std::string::npos){
                    result.insert(words[i]);
                }
            }
        }

        return {result.begin(), result.end()};
    }
};