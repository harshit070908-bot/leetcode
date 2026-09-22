#include <string>

class Solution {
public:
    bool isPalindrome(std::string s, int left, int right){
        while(left < right){
            if(s[left] != s[right]) return 0;
            left ++;
            right --;
        }
        return 1;
    }

    bool validPalindrome(std::string s) {
        size_t left {};
        size_t right {s.length() - 1};
        while(left < right){
            if(s[left] != s[right]) return isPalindrome(s, left, right-1) || isPalindrome(s, left+1, right);
            left++;
            right--;
        }

        return 1;
    }
};