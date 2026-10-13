#include <vector>

class Solution {
public:
    std::vector<int> findSmallestSetOfVertices(int n, std::vector<std::vector<int>>& edges) {
        std::vector<int> result;

        std::vector<int> freq(n);
        for(auto& i : edges){
            freq[i[1]]++;
        }

        for(int i {}; i < n; i++){
            if(freq[i] == 0) result.push_back(i);
        }

        return result;
    }
};