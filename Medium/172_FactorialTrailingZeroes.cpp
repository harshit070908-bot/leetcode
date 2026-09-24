class Solution {
public:
    int trailingZeroes(int n) {
        int twos {};
        int fives {};

        for(int i {1}; i <= n; i++){
            int factor {i};
            while(factor % 2 == 0){
                twos++;
                factor /= 2;
            }
            while(factor % 5 == 0){
                fives++;
                factor /= 5;
            }
        }

        return (fives < twos) ? fives : twos;
    }
};