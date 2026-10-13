#include <vector>

class Solution {
public:
    int findJudge(int n, std::vector<std::vector<int>>& trust) {
        int result {-1};

        std::vector<int> freq(n+1, 0);
        std::vector<bool> trustSomeone(n+1, 0);
        for(auto i : trust){
            trustSomeone[i[0]] = true;
            freq[i[1]]++;
        }

        for(int i {1}; i <= n; i++){
            if(!trustSomeone[i] && freq[i] == n-1) result = i; 
        }

        return result;
    }
};