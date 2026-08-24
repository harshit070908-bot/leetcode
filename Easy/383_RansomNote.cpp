#include <iostream>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        if(ransomNote.size() > magazine.size()) return 0;

        int count [26] {};
        for(int i {}; i<ransomNote.size(); i++){
            count[ransomNote[i] - 'a']++;
        }

        for(int i {}; i<magazine.size(); i++){
            if(count[magazine[i] - 'a'] > 0){
                count[magazine[i] - 'a']--;
            }else if(count[magazine[i] - 'a'] == 0){
                continue;
            }else{
                return 0;
            }
        }

        for(int i {}; i<26; i++){
            if(count[i] > 0){
                return 0;
            }
        }

        return 1;
    }
};