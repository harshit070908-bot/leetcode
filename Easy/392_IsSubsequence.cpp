#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        if(s.empty()) return 1;

        int p {};
        for(int i {}; i < t.length(); i++){
            if(t[i] == s[p]){
                p++;
            }
        }

        return (p == s.length());
    }
};