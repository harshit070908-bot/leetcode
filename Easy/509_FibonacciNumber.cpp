class Solution {
public:
    int fib(int n) {
        int a {};
        int b {1};
        if (n == 0) return a;
        else if (n == 1) return b;
        for(size_t i {}; i<n-1; ++i){
            b = b + a;
            a = b - a;
        }
        return b;
    }
};