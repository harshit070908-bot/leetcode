#include <vector>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> freq;
        std::unordered_set<int> s;

        for(int i : arr){
            freq[i]++;
        }

        for(auto [key, value] : freq){
            bool inserted = s.insert(value).second;
            if(!inserted) return 0;
        }

        return 1;
    }
};