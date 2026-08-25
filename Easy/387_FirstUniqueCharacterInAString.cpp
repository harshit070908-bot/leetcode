#include <string>

class Solution {
public:
    int firstUniqChar(std::string s) {
        int cArr [26] {};
        for(int i {}; i < s.size(); i++){
            cArr[s[i] - 'a']++;
        }

        for(int i {}; i < s.size(); i++){
            if(cArr[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};