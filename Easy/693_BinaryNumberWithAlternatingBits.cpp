class Solution {
public:
    bool hasAlternatingBits(int n) {
        int current {n % 2};
        n /= 2;
        while(n > 0){
            int next = n % 2;
            if(current == next){
                return 0;
            }
            current = next;
            n /= 2;
        }
        return 1;
    }
};