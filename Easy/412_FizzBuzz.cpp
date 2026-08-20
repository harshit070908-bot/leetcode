#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> arr(n);
        for(int i {1}; i<=n; ++i){
            if(i % 3 == 0 && i % 5 != 0){
                arr[i-1] = "Fizz";
            }else if(i % 3 != 0 && i % 5 == 0){
                arr[i-1] = "Buzz";
            }else if(i % 3 == 0 && i % 5 == 0){
                arr[i-1] = "FizzBuzz";
            }else{
                arr[i-1] = std::to_string(i);
            }
        }
        return arr;
    }
};