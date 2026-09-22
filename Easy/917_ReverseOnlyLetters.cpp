#include <string>
#include <algorithm>

class Solution {
public:
    std::string reverseOnlyLetters(std::string s) {
        size_t left {};
        size_t right {s.length() - 1};

        while(left < right){
            while(!std::isalpha(s[left]) && left < right){
                left++;
            }
            while(!std::isalpha(s[right]) && left < right){
                right--;
            }
            if(left < right){
                std::swap(s[left++], s[right--]);
            }
        }

        return s;
    }
};