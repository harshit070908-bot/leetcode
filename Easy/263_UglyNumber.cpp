class Solution {
public:
    bool isUgly(int n){
        if (n <= 0) return 0;
        while(!(n % 2)) n /= 2;
        while(!(n % 3)) n /= 3;
        while(!(n % 5)) n /= 5;
        if (n == 1) return 1;
        return 0;
    }
};