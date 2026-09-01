#include <unordered_set>

class Solution {
public:
    int sumSquareDigit(int n){
        int sum{};

        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        std::unordered_set<int> checked;

        int sumSquared = sumSquareDigit(n);

        while(sumSquared != 1){
            auto check = checked.insert(sumSquared).second;
            if(!check){
                return 0;
            }
            sumSquared = sumSquareDigit(sumSquared);
        }

        return 1;
    }
};