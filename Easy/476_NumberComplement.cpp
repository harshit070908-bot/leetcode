#include <cmath>

class Solution {
public:
    int findComplement(int num) {
        int result {};
        int exp {};

        while(num > 0){
            if(num % 2 == 0){
                result += std::pow(2, exp);
            }
            exp++;
            num /= 2;
        }
        return result;
    }
};