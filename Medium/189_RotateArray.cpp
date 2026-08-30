#include <vector>
#include <algorithm>

class Solution {
public:
    void rotate(std::vector<int>& v, int k) {
        if(v.empty()) return;
        k %= v.size();

        std::reverse(v.begin(), v.end());
        std::reverse(v.begin(), v.begin()+k);
        std::reverse(v.begin()+k, v.end());
    }
};