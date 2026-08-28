#include <string>
#include <vector>

class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        int left1 = num1.size() - 1;
        int left2 = num2.size() - 1;

        std::string result {};
        int carry {};

        while(left1 >= 0 || left2 >= 0 || carry){
            int last1 = (left1 >= 0) ? num1[left1--] - '0' : 0;
            int last2 = (left2 >= 0) ? num2[left2--] - '0' : 0;

            int digit = last1 + last2 + carry;
            result.push_back((digit % 10) + '0');
            carry = digit/10;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};