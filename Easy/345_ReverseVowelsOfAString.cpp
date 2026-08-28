#include <string>
#include <vector>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::vector<int> v;
        std::string vowels = "aeiouAEIOU";

        for(int i {}; i<s.size(); i++){
            if(vowels.find(s[i]) != std::string::npos){
                v.push_back(i);
            }
        }

        for(int i {}; i<v.size()/2; i++){
            std::swap(s[v[i]], s[v[v.size() - i - 1]]);
        }

        return s;
    }
};