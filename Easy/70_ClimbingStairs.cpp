class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return n;

        int curr {1};
        int prev {};

        for(int i {}; i < n; i++){
            curr += prev;
            prev = curr - prev;
        }

        return curr;
    }
};