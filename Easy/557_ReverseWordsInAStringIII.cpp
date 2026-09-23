#include <string>

class Solution {
public:
    void reverse(std::string& s, int left, int right){
        while(left < right){
            std::swap(s[left++], s[right--]);
        }
    }

    std::string reverseWords(std::string s) {
        int left {};
        for(int i {}; i < s.length(); i++){
            if(s[i] == ' '){
                reverse(s, left, i-1);
                left = i+1;
            }else if(i == s.length()-1){
                reverse(s, left, s.length()-1);
            }
        }

        return s;
    }
};