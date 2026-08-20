#include <climits>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        int y {x};
        int reverse {};
        while(x != 0){
            int digit = x % 10;
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > 7))
                return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && digit < -8))
                return 0;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        return (y == reverse) ? 1 : 0;
    }
};