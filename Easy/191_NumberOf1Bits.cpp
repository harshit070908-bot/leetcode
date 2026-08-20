class Solution {
public:
    int hammingWeight(int n) {
        int result {};
        while(n > 0){
            if(n % 2 == 1){
                ++result;
            }
            n /= 2;
        }
        return result;
    }
};