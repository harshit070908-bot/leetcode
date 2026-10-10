#include <vector>
#include <unordered_set>

class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        std::unordered_set<int> checked;

        for(int i : arr){
            if(checked.contains(i * 2)){
                return 1;
            }
            if(i % 2 == 0 && checked.contains(i / 2)){
                return 1;
            }
            checked.insert(i);
        }

        return 0;
    }
};