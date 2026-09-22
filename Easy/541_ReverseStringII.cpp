#include <string>

class Solution {
public:
    std::string reverseStr(std::string s, int k) {
        for(int i {}; i < s.length(); i += 2*k){
            int start = i;
            int end = std::min(i + k, (int)s.length()) - 1;
            while(start < end){
                std::swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
    }
};