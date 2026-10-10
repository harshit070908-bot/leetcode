#include <vector>
#include <unordered_set>

class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        std::unordered_set<int> seen;

        for(int i : arr) {
            if(seen.count(2 * i) ||
               (i % 2 == 0 && seen.count(i / 2))) {
                return true;
            }

            seen.insert(i);
        }

        return false;
    }
};