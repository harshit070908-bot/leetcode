#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int left {};
        int right = s.length() - 1;
        while(left < right){
            if(!std::isalnum(s[left])){
                left++;
                continue;
            }

            if(!std::isalnum(s[right])){
                right--;
                continue;
            }
            
            if(std::tolower(s[right]) != std::tolower(s[left])){
                return 0;
            }
            left++;
            right--;
        }
        return 1;
    }
};