#include <string>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        int count {};
 
        bool* arr = new bool[26] {};

        for(char i : sentence){
            if(!arr[i - 'a']){
                arr[i - 'a'] = 1;
                count++;
            }
        }

        delete[] arr;

        return count == 26;
    }
};