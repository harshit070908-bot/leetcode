#include <string>

class Solution {
public:
    int myAtoi(std::string s) {
        bool negative {};
        long long int result {};
        bool started {};

        for(size_t i {}; i < s.length(); i++){
            if(s[i] <= '9' && s[i]>='0'){
                result = (s[i] - '0') + result * 10;
                if(result > INT_MAX) break;
                started = 1;
            }else if(s[i] == '-' && !started){
                negative = 1;
                started = 1;
            }else if(s[i] == '+' && !started){
                started = 1;
            }else if(s[i] == ' ' && !started){
                continue;
            }else{
                break;
            }
        }

        if(negative) result = -result;

        if(result >= INT_MAX) return INT_MAX;
        if(result <= INT_MIN) return INT_MIN;
        return result;
    }
};