class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
            int sum {};
            while(num > 0){
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
        // return (n == 0) ? 0 : 1 + (num - 1) % 9;
    }
};