class Solution {
public:
    int numberOfSteps(int num) {
        int steps {};
        while(num > 1){
            if(num%2 == 1){
                num = --num / 2;
                steps += 2;
            }else{
                num /= 2;
                steps++;
            }
        }
        return (num == 0) ? steps : ++steps;
    }
};