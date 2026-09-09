#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        size_t size {needle.length()};
        
        if(haystack == needle) return 0;
        if(haystack.length() < size) return -1;

        for(int i {}; i < haystack.length() - size + 1; i++){
            if(needle == haystack.substr(i, size)){
                return i;
            }
        }

        return -1;
    }
};