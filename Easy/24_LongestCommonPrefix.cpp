#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs){
        if(strs.empty()) return "";
        std::string result {strs[0]};

        for(size_t i = 1; i < strs.size(); i++){
            size_t rSize {result.length()}, sSize {strs[i].length()};
            if(sSize < rSize) result.erase(sSize);
            for(int j {}; j < sSize; j++){ 
                if(j < result.length()){
                    if(result[j] != strs[i][j]){
                        result.erase(j);
                    }
                }else{
                    break;
                }
            }
        }

        return result;
    }
};