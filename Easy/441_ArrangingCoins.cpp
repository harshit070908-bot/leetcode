class Solution {
public:
    int arrangeCoins(int n) {
        long long int left {};
        long long int right {n};
        while(left <= right){
            long long int mid = left + (right - left) / 2;
            long long int coins = mid * (mid + 1) / 2;

            if(coins > n){
                right = mid - 1;
            }
            else if(coins < n){
                left = mid + 1;
            }
            else{
                return mid;
            }
        }
        return right;
    }
};