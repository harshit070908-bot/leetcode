#include <vector>
#include <map>
#include <string>
#include <array>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::map<std::array<int, 26>, std::vector<std::string>> groups;

        for(auto i : strs){
            std::array<int, 26> freq {};
            for(char j : i){
                freq[j - 'a']++;
            }

            groups[freq].push_back(i);
        }

        for(auto [key, value] : groups){
            result.push_back(value);
        }

        return result;
    }
};