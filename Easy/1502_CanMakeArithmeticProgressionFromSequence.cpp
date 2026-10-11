#include <vector>
#include <unordered_set>

class Solution {
public:
    bool canMakeArithmeticProgression(std::vector<int>& arr) {
        std::unordered_set<int> s {arr.begin(), arr.end()};

        int min = arr[0];
        int max = arr[0];
        for(int i : arr){
            min = (min < i) ? min : i;
            max = (max > i) ? max : i;
        }

        int diff;
        if((max - min) % (arr.size() - 1) == 0){
            diff = (max - min) / (arr.size() - 1);
        }else return 0;

        for(; min < max; min += diff){
            if(!s.contains(min)) return 0;
        }

        return 1;
    }
};